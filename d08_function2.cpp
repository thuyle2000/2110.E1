#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lap trinh ham - version 2 - them tham so cho ham print_star

void print_star(int n){
//	int n=5;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++ ){
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	int n=3;
	
	print_star(n); //goi ham print_star() de in tam giac ngoi sao co n dong
	
	print_star(5);	//goi ham print_star() de in tam giac ngoi sao co 5 dong
	
	print_star(7);
	
	print_star(9);
	
	
}




