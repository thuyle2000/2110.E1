#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cap phat bo nho dong
int main() {
	int n;

	while(1) {
		printf("Nhap so phan tu [5-20]: ");
		scanf("%d", &n);
		if(n>=5 && n<=20) {
			break;
		}
	}

	int *p = (int *)malloc(n * sizeof(int));

	if(p!=NULL) {
		//neu cap phat thanh cong
		//1. nhap du lieu vo mang n-phan tu, co dc chua trong p
		for(int i=0; i<n; i++) {
			printf(" nhap so nguyen thu [%d]: ", i);
			scanf("%d", p+i);
		}

		//2. in day so ra man hinh
		printf("\n Day so vua nhap: \n");
		for(int i=0; i<n; i++) {
			printf(" %d ", *(p+i));
		}

		//3.sap xep thu tu day so theo trat tu tang dan
		int temp;
		for(int i=0; i<n-1; i++) {
			for(int k=0; k<n-1-i; k++) {
				if(*(p+k)>*(p+k+1)) {
					temp = *(p+k);
					*(p+k) = *(p+k+1);
					*(p+k+1) = temp;
				}
			}
		}

		//4. in day so sau khi xep thu tu
		printf("\n Day so sau khi sap xep thu tu: \n");
		for(int i=0; i<n; i++) {
			printf(" %d ", *(p+i));
		}

	} else {
		printf("Viec cap phat bo nho that bai ! \n");
	}
}



