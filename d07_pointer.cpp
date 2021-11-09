#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du demo ve con tro pointer
int main(){
	int n = 10;
	float f = 12.3456;
	char c = 'y';
	char name[20] = "Nguyen Viet Thu";
	
	int *p1;
	
	printf("adress = %X, n= %d \n", &n, n);
	printf("adress = %X, f= %f \n", &f, f);
	printf("adress = %X, c= %c \n", &c, c);
	printf("adress = %X, name= %s \n", &name, name);
	printf("adress = %X, p1= %X \n\n", &p1, p1);
	
	p1 = &n;
	printf("after assign n -> p1: \n");
	printf("adress = %X, p1= %X \n\n", &p1, p1);
	
	//thay doi gia tri cua n thong qua con tro p1
	*p1 = 30;
	printf("after assign *p1 = 30: \n");	
	printf("adress = %X, n= %d \n", &n, n);
	
}



