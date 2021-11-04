#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap FOR
//viet chuong trinh tinh tong cua N-so nguuyen dau tien
int main(){
	int n;
	printf("vui long nhap so nguyen N: ");
	scanf("%d" , &n);
	
	int sum=0;
	for(int i=1; i<=n; i++ ){
		sum = sum+i;
	}
	printf("Tong : %d \n", sum);
}



