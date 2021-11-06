#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo mang 2 chieu so nguyen
int main() {
	int a[3][4] = {1,2,3,4,5,6,7,8,9,0,1,2};
	
	printf("Mang a: \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			printf("a[%d][%d] = %d \n", i, j, a[i][j]);
		}
	}

	int b[3][4] = { {1,2,3}, {5,6,7}, {9,0,1} };

	printf("\nMang b: \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	
}



