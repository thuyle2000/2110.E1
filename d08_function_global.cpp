#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo cach su dung bien toan cuc (global variable)
int result;

//khai bao prototype cua 2 ham add(), sub()
void add(int a, int b);
void sub(int a, int b);

int main() {
	int x,y;

	printf("nhap so thu 1: ");
	scanf("%d", &x);

	printf("nhap so thu 2: ");
	scanf("%d", &y);
	
	//cong 2 so x, y
	add(x,y);
	printf("%d + %d = %d \n", x, y, result);
	
	//tru 2 so x, y
	sub(x,y);
	printf("%d - %d = %d \n", x, y, result);
}

void add(int a, int b) {
	result = a+b;
}

void sub(int a, int b) {
	result = a-b;
}
