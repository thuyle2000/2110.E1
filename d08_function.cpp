#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lap trinh ham - version 1 - ko tham so 
void print_star(){
	int n=5;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++ ){
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	print_star();	//goi ham print_star()
}




