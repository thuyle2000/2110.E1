#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*demo cach su dung ham nhap du lieu scanf()*/
int main() {
	char hoten[80];
	int toan, ly, hoa;

	//nhap ho va ten sinh vien
	printf(">> nhap ho ten sinh vien: ");

//	scanf("%[^\n]s", hoten);		// %s : ko nhap khoang trang
	scanf("%[^\n]s", hoten); 		// %[^\n]s : nhap tat ca cac ky tu tru \n

	//nhap diem toan, ly, hoa
//	printf(">> nhap diem toan, ly va hoa: ");
//	scanf("%d %d %d", &toan, &ly, &hoa );

	printf(">> nhap diem toan: ");
	scanf("%d", &toan);
	printf(">> nhap diem ly: ");
	scanf("%d", &ly);
	printf(">> nhap diem hoa: ");
	scanf("%d", &hoa);


	printf("\n\tBang Diem \n");
	printf("====================\n");
	printf("Ho ten : %s \n", hoten);
	printf("%-10s = %04d \n", "Toan", toan);
	printf("%-10s = %4d \n", "Vat Ly", ly);
	printf("%-10s = %4d \n", "Hoa Hoc", hoa);
	printf("====================\n");

	printf("%-10s = %4d \n", "Tong diem", toan+ly+hoa);
	printf("%-10s = %.3f \n", "Binh quan", (toan+ly+hoa)/3.0);
}



