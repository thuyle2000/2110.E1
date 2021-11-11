#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s16_0();
void s16_TIY_1();
void s16_TIY_2();
void kiemTraSoNT();
int gptb2(int a, int b, int c, float &x1, float &x2);

int main() {
	int op=1;
	int a,b,c, r;
	float x1, x2;

	while(1) {
		system("cls"); //lenh xoa man hinh
		printf(" >> MENU Session 16 << \n");
		printf("  1. binh phuong \n");
		printf("  2. dien tich \n");
		printf("  3. giai thua \n");
		printf("  4. so nguyen to \n");
		printf("  5. giai PTB2 \n");
		printf("  6. ket thuc \n");
		printf(" vui long nhap ma so chuc nang [1-6] : ");
		scanf("%d" , &op);

		switch(op) {
			case 1:
				s16_0();
				break;
			case 2:
				s16_TIY_1();
				break;
			case 3:
				s16_TIY_2();
				break;
			case 4:
				kiemTraSoNT();
				break;
			case 5:
				//nhap a,b,c
				r = gptb2(a,b,c, x1,x2);
				//dua vao r => thong bao tuong ung
				break;
			case 6:
				return 0;
		}
		system("pause");


	}

}

/* bai tap session 16- 30phut trang 275 */
void s16_0() {
	printf("\n chuong trinh tinh binh phuong cua 1 so nguyen \n");
}


/* bai tap s16_TIY_1 trang 276 */
void s16_TIY_1() {
	printf("\n chuong trinh tinh dien tich va chu vi hinh tron \n");
}


/* bai tap s16_TIY_2 trang 276 */
void s16_TIY_2() {
	printf("\n chuong trinh tinh giai thua cua so nguyen N \n");
}


/* bai tap giai phuong trinh bac 2 */
int gptb2(int a, int b, int c, float &x1, float &x2) {
	printf("\n giai phuong trinh bac 2 \n");
}


/* bai tap kiem tra 1 so nguyen co phai la so nguyen to ko ? */
void kiemTraSoNT() {
	printf("\n kiem tra so nguyen to\n");
}

