#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
TIY 7.1 (134)
Write a program that accepts two numbers a and b and checks 
whether or not a is divisible by b.
*/
int main(){
	int a, b;
	
	printf("nhap gia tri a: ");
	scanf("%d", &a );
	
	printf("nhap gia tri b: ");
	scanf("%d", &b );
	
	if(a%b==0){
		printf("%d chia het cho %d \n", a, b);
	}
	else{
		printf("%d KO chia het cho %d \n", a, b);
	}
}



