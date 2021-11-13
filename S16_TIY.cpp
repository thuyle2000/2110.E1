#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
				printf("\n\n");
				printf(" nhap he so a: "); scanf("%d", &a);
				printf(" nhap he so b: "); scanf("%d", &b);
				printf(" nhap he so c: "); scanf("%d", &c);
				
				r = gptb2(a,b,c, x1,x2);
								
				//dua vao r => thong bao tuong ung
				if(r>0){
					printf("\n PT co 2 nghiem: x1 = %.2f, x2 = %.2f \n", x1,x2);
				}
				else if(r==0){
					printf("\n PT co nghiem kep: x1 = x2 = %.2f \n", x1);
				}
				else{
					printf("\n PT vo nghiem !\n");
				}

				break;
			case 6:
				return 0;
		}
		system("pause");

	}

}

int square(int n) {
	return n*n;
}

/* bai tap session 16- 30phut trang 275 */
void s16_0() {
	printf("\n\n chuong trinh tinh binh phuong cua 1 so nguyen \n");
	int n;
	printf("nhap 1 so nguyen n: ");
	scanf("%d", &n);
	printf("Binh phuong cua %d = %d \n", n, square(n));

	fflush(stdin);
}



/* bai tap s16_TIY_1 trang 276 */
void s16_TIY_1() {
	printf("\n\n chuong trinh tinh dien tich va chu vi hinh tron \n");
	float r;

	while(1) {
		printf(" nhap ban kinh (>0) : ");
		scanf("%f", &r);
		if(r>0) {
			break;
		}
	}
	printf("\n");
	printf(">> dien tich : %.2f \n", r*r*3.1415);
	printf(">> chu vi : %.2f \n", 2*r*3.1415);
}


/* bai tap s16_TIY_2 trang 276 */
void s16_TIY_2() {

	fflush(stdin);

	printf("\n\n chuong trinh tinh giai thua cua so nguyen N \n");
	int n;
	while(1) {
		printf(" nhap n [0-20] : ");
		scanf("%d", &n);
		if(n>=0 && n<=20) {
			break;
		}
	}

	double gt=1;
	for(int i=2; i<=n; i++) {
		gt = gt*i;
	}
	printf(" >> %d! = %.0f \n", n, gt);
}


/* bai tap giai phuong trinh bac 2 */
int gptb2(int a, int b, int c, float &x1, float &x2) {
	printf("\n\n giai phuong trinh bac 2 \n");

	float delta = b*b - 4*a*c;

	if(delta<0) {
		return -1;
	} else if(delta==0) {
		x1 = x2 = -b/(2*a);
		return 0;
	} else {
		x1 = (-b-sqrt(delta)) / (2*a);
		x2 = (-b+sqrt(delta)) / (2*a);
		return 1;
	}
}


/* bai tap kiem tra 1 so nguyen co phai la so nguyen to ko ? */
void kiemTraSoNT() {

	fflush(stdin);

	printf("\n kiem tra so nguyen to\n");

	int n;
	while(1) {
		printf(" nhap n [>=2] : ");
		scanf("%d", &n);
		if(n>=2) {
			break;
		}
	}

	int so_nt=1;	//gia su n la so nguyen to

	//cach 1
	for(int i=2; i<n; i++) {
		if( n%i == 0) {
			// i la uoc so cua n => n ko phai la so nguyen to
			so_nt = 0;
			break;	// ket thuc vong lap kiem tra
		}
	}
	if(so_nt == 1) {
		printf(" >> %d la so nguyen to ! \n",n);
	} else {
		printf(" >> %d la hop so ! \n",n);
	}


	//cach 2
	so_nt=1;	//gia su n la so nguyen to
	for(int i=2; i<=n/2; i++) {
		if( n%i == 0) {
			// i la uoc so cua n => n ko phai la so nguyen to
			so_nt = 0;
			break;	// ket thuc vong lap kiem tra
		}
	}
	if(so_nt == 1) {
		printf(" >> %d la so nguyen to ! \n",n);
	} else {
		printf(" >> %d la hop so ! \n",n);
	}


	//cach 3
	so_nt=1;	//gia su n la so nguyen to
	for(int i=2; i<=sqrt(n); i++) {
		if( n%i == 0) {
			// i la uoc so cua n => n ko phai la so nguyen to
			so_nt = 0;
			break;	// ket thuc vong lap kiem tra
		}
	}
	if(so_nt == 1) {
		printf(" >> %d la so nguyen to ! \n",n);
	} else {
		printf(" >> %d la hop so ! \n",n);
	}

}

