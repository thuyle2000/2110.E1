#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lap trinh ham :
//phuong phap truyen dia chi cua tham so thuc te (pass by reference) cho ham
//version 2

//khai bao prototype cua ham xchange()
void xchange(int &a, int &b);

int main() {
	int a, b;
	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);
	
	xchange(a,b);
	
	printf(">> Ham main(), sau khi goi ham xchange(): \n");
	printf("   a = %d, b= %d \n", a,b);
}

//ham hoan doi gia tri cua 2 tham so a, b
void xchange(int &a, int &b) {
	int temp ;

	temp=a;
	a=b;
	b=temp;

	printf(">> Trong ham xchange(): a = %d, b = %d \n", a,b);
}

