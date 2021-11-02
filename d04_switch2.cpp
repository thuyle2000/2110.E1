#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo lap trinh re nhanh co dieu kien : switch-case
	- nhap vao 2 so nguyen va 1 ky hieu phep toan,
	  => in ra ket qua cua phep toan tren 2 so nguyen vua nhap
*/

int main() {
	int x, y;
	char op;

	
	printf("nhap so nguyen thu 1 : ");
	scanf("%d", &x);

	printf("nhap so nguyen thu 2 : ");
	scanf("%d", &y);

	fflush(stdin);		//xoa bo dem cua ban phim
	
	printf("nhap phep toan [ + - * ? % ]: ");
	scanf("%c", &op);

	system("cls");		// lenh xoa man hinh
	
	switch(op) {
		case '+':
			printf(" %d + %d = %d \n", x, y, x+y);
			break;
		case '-':
			printf(" %d - %d = %d \n", x, y, x-y);
			break;
		case '*':
			printf(" %d * %d = %d \n", x, y, x*y);
			break;
		case '/':
			printf(" %d / %d = %d \n", x, y, x/y);
			break;
		case '%':
			printf(" %d %% %d = %d \n", x, y, x%y);
			break;
		default:
			printf(" %c la phep toan ko hop le !!! \n", op);
			break;
	}

}



