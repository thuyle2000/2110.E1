#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 4;

	//in hinh vuong ngoi sao
	for(int i=0; i<n; i++) {

		for(int j=0; j<n; j++) {
			//in ra n dau *
			printf("* ");
		}

		printf("\n");
	}

	printf("\n\n");
	//in hinh tam giac ngoi sao
	for(int i=0; i<n; i++) {

		for(int j=0; j<=i; j++) {
			//in ra n dau *
			printf("* ");
		}

		printf("\n");
	}
	
	printf("\n\n");
	
	//in hinh tam giac ngoi sao - canh day o tren 
	for(int i=n; i>0; i--) {

		for(int j=0; j<i; j++) {
			//in ra n dau *
			printf("* ");
		}
		printf("\n");
	}
	
	
	//session 10 - TIY 1
	char tensv[]="Truong Tri Trung";
	int age;
	printf("Hello, %s !\n" , tensv);
	printf("How old are u ? ");
	scanf("%d", &age);
	
	for(int i=0; i<age; i++){
		printf(">> hi, %s \n", tensv);
	}

}



