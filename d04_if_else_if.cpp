#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo lap trinh re nhanh co dieu kien : if-else-if bac thang
	nhap vao diem thi cua sinh vien => xuat ra ket qua phan loai:
   tu 90-100: XS, 80-89: Gioi, 65-79: Kha, 40-64: Trung Binh, <40 : Chua Dat
*/

int main() {
	int diemKQ;
	printf("Vui long nhap diem ket qua thi: ");
	scanf("%d", &diemKQ);

	if(diemKQ<0 || diemKQ>100) {
		printf(" >> Diem thi ko hop le !!! \n");

	} else if(diemKQ>=90) {
		//diem KQ >=90 && diemKQ <=100
		printf(" >> Xuat sac \n");

	} else if(diemKQ>=80) {
		//diem KQ >=80 && diemKQ <90
		printf(" >> Gioi \n");

	} else if(diemKQ>=65) {
		//diem KQ >=65 && diemKQ <80
		printf(" >> Kha \n");
	} else if(diemKQ>=40) {
		//diem KQ >=40 && diemKQ <65
		printf(" >> Trung binh \n");
	}
	else{
		//diem KQ <40 
		printf(" >> Chua dat !!! \n");
	}
}



