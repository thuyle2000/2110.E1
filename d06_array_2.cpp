#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang
int main() {
	int a[5]; //khai bao mang chua 5 so nguyen, ten la a.

	//viet vong lap FOR de khoi tao gia tri cho phan tu trong mang a
	for(int i=0; i<5; i++){
		printf("nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	//viet vong lap FOR de truy xuat va in cac gia tri trong mang a
	for(int i=0; i<5; i++) {
		printf(" a[%d] = %d \n", i, a[i]);
	}
}



