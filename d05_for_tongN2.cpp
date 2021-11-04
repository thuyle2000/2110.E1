#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap FOR
//viet chuong trinh tinh tong cua N-so nguyen dau tien (version 2)
int main(){
	int n;
	printf("vui long nhap so nguyen N: ");
	scanf("%d" , &n);
	
	int sum=0;
	for(int i=1; i<=n; i++ ){
		sum += i;	//sum = sum +i
		printf("+ %d ", i);
	}
	printf("= %d \n", sum);
}



