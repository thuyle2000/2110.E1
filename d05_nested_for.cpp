#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap FOR long nhau (nested FOR)
//in ra khoi hinh chu nhat cac ngoi sao
int main(){
	int row=5, col=7;
	
	for(int i=0; i<row; i++){
		
		//in 1 dong gom co col-ngoi sao
		for(int j=0; j<col; j++){
			printf(" * ");
		}
		printf("\n");
	}
}



