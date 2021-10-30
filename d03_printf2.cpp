#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* demo ve cach dung ham printf() */
int main() {
	char hoten[80] = "Pham Anh Doan";
	int toan = 90, ly=75, hoa=100;
	
	printf("\tBang Diem \n");
	printf("====================\n");
	printf("Ho ten : %s \n", hoten);
	printf("%-10s = %04d \n", "Toan", toan);
	printf("%-10s = %4d \n", "Vat Ly", ly);
	printf("%-10s = %4d \n", "Hoa Hoc", hoa);
	printf("====================\n");
	
	printf("%-10s = %4d \n", "Tong diem", toan+ly+hoa);
	printf("%-10s = %.3f \n", "Binh quan", (toan+ly+hoa)/3.0);
}



