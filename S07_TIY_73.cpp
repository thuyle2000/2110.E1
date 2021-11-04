#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TIY 7.3


int main() {
	int n1,n2,hieu;
	printf(">> Kiem tra hieu 2 so da nhap \n");
	
	printf("Nhap so n1: ");
	scanf("%d", &n1);
	printf("Nhap so n2: ");
	scanf("%d", &n2);
	
	hieu = n1 - n2;
	printf("Hieu so n1-n2 = %d \n", hieu);
	
	if(hieu==n1 || hieu==n2) {		
		printf("Hieu bang gia tri cua cua 1 trong 2 so da nhap \n\n");
	} else {
		printf("Hieu khong bang bat ky gia tri da nhap \n\n");
	}
}



