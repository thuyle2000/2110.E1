#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo vong lap DO-WHILE va FOR
//viet chuong trinh tinh tong le cua N-so nguyen dau tien <=100

int main() {
	int n=0;

	do{
		printf("vui long nhap so nguyen N [1-100]: ");
		scanf("%d" , &n);
	}while(n<1 || n>100);


	int sum=0;
	for(int i=1; i<=n; i+=2 ) {
		sum += i;	//sum = sum +i
		printf("+ %d ", i);
	}
	printf("= %d \n", sum);
}



