#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap FOR long nhau (nested FOR)
//in ra khoi tam giac cac ngoi sao
int main(){
	int row=5;
	
	for(int i=0; i<row; i++){
		
		//in 1 dong gom co i-ngoi sao
		for(int j=0; j<=i; j++){
			printf(" * ");
		}
		printf("\n");
	}
}



