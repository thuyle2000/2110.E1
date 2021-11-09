#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// demo contro voi mang
int main() {
	int a[] = {12, 78, 5, 10, 69 };

	int *p = a; //con tro p chua dia chi cua mang a[]
	printf(" a[]: \n");

	for(int i=0; i<5; i++) {
		printf(" %d ", a[i]);
	}

	printf("\n\n");
	for(int i=0; i<5; i++) {
		printf(" %d ", *(a+i));
	}

	printf("\n\n");
	for(int i=0; i<5; i++ ) {
		printf(" %d ", *p++);
//		p++;
	}
}



