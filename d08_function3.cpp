#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//demo lap trinh ham co gia tri tra ve

//khai bao prototype cua ham add() va sub()
int add(int a, int b);
int sub(int a, int b);

int main() {
	int x,y;

	printf("nhap so thu 1: ");
	scanf("%d", &x);

	printf("nhap so thu 2: ");
	scanf("%d", &y);

	//cong 2 so
	int r1 = add(x,y);
	printf("%d + %d = %d \n", x, y,r1);
	printf("Can bac 2 cua %d = %.2f \n", r1, sqrt(r1));

	//tru 2 so
	printf("%d - %d = %d \n", x, y, sub(x,y));
}



int add(int a, int b) {
	return (a+b);
}

int sub(int a, int b) {
	return (a-b);
}
