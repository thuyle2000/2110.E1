#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve con tro ham
void add(int a, int b);
void sub(int a, int b);
void pro(int a, int b);

int main() {
	//khai bao 1 con tro ham co the chua dia chi cua ham add(), sub() va pro()
	void (*p)(int x, int y);

	int a, b;
	printf("nhap so nguyen thu 1: ");
	scanf("%d", &a);
	printf("nhap so nguyen thu 2: ");
	scanf("%d", &b);
	
	//thuc hien phep cong 2 so thong qua con tro p
	p=add;
	p(a,b);
	
	//thuc hien phep nhan 2 so thong qua con tro p
	p=pro;
	p(a,b);

	//thuc hien phep tru 2 so thong qua con tro p
	p=sub;
	p(a,b);
	
}

void add(int a, int b) {
	printf("%d + %d = %d \n", a, b, a+b);
}

void sub(int a, int b) {
	printf("%d - %d = %d \n", a, b, a-b);
}

void pro(int a, int b) {
	printf("%d * %d = %d \n", a, b, a*b);
}

