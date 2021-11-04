#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int op;
	
	//menu
	while(1){
		printf("\n MENU- Homework session 9 \n");
		printf("1. TIY 9.1 \n");
		printf("2. TIY 9.2 \n");
		printf("3. TIY 10.1 \n");
		printf("4. Exit \n");
		printf("enter your choice [1-4]: ");
		scanf("%d", &op);
		
		switch(op){
			case 1: 
			{
				int i=9;
				printf("Cau 1: .... \n");
				
				break;
			}
			
			case 2:{
				int i=0;
				printf("Cau 2: ... \n");
				break;
			}
			
			case 3:{
				int i=10;
				printf("Cau 2: ... \n");
				break;
			}		
			
			case 4:
				exit(0);
			
			default:
				printf("invalid choice !!!! \n");
				break;	
		}
		
	}
}



