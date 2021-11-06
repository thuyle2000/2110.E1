#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang:
// nhap 1 day so, tim va dem cac so le trong day so nay
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

	// viet vong lap FOR de dem va in cac so le trong mang a
	printf("\n >> Cac so le: ");
	int count=0;
	for(int i=0; i<n; i++) {
		if(a[i]%2 == 1){
			count++;
			printf(" %d ",a[i]);
		}
	}
	
	printf("\n >> Co tat ca %d so le \n", count);

	
}



