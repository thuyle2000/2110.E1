#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo vong lap WHILE-FOR
//viet chuong trinh tinh tong chan cua N-so nguyen dau tien <=100 

int main() {
	int n;

	while(1) {
		printf("vui long nhap so nguyen N [1-100]: ");
		scanf("%d" , &n);
		if(n<1 || n>100){
			printf(" >> so nhap ko hop le, vui long nhap lai ! \n\n");
			continue;			
		}
		break; // nhap dung => ket thuc vong lap !
	}


	int sum=0;
	for(int i=2; i<=n; i+=2 ) {
		sum += i;	//sum = sum +i
		printf("+ %d ", i);
	}
	printf("= %d \n", sum);
}



