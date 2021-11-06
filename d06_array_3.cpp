#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang
int main() {
	int n;
	
	//vong lap cho nhap so phan tu trong mang a [3-10]
	while(1){
		printf("Vui long nhap so phan tu cua mang [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) break;
	}
	
	
	int a[n]; //khai bao mang chua 5 so nguyen, ten la a.

	//viet vong lap FOR de khoi tao gia tri cho phan tu trong mang a
	for(int i=0; i<n; i++){
		printf("nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	//viet vong lap FOR de truy xuat va in cac gia tri trong mang a
	for(int i=0; i<n; i++) {
		printf(" a[%d] = %d \n", i, a[i]);
	}
	
}



