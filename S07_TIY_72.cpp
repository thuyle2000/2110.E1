#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
TIY 7.2
Write a program to accept 2 numbers and tell whether the product
of the two numbers is equal to or greater than 1000.
*/
int main() {
	int a, b;
	printf("nhap gia tri a: ");
	scanf("%d", &a );

	printf("nhap gia tri b: ");
	scanf("%d", &b );
	
	if(a*b >=1000){
		printf(" %d * %d (= %d) >= 1000 \n", a, b, a*b);
	}
	else{
		printf(" %d * %d (= %d) < 1000 \n", a, b, a*b);
	}
}



