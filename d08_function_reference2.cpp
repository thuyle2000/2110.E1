#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lap trinh ham :
//phuong phap truyen dia chi cua tham so thuc te (pass by reference) cho ham
//version 2

//khai bao prototype cua ham xchange()
void xchange(int &a, int &b);

int main() {
	int x, y;
	printf("nhap so nguyen a: ");
	scanf("%d", &x);
	printf("nhap so nguyen b: ");
	scanf("%d", &y);
	
	xchange(x,y);
	
	printf(">> Ham main(), sau khi goi ham xchange(): \n");
	printf("   x = %d, y= %d \n", x,y);
}

//ham hoan doi gia tri cua 2 tham so a, b
void xchange(int &a, int &b) {
	int temp ;

	temp=a;
	a=b;
	b=temp;

	printf(">> Trong ham xchange(): a = %d, b = %d \n", a,b);
}

