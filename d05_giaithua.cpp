#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tinh giai thua cua so nguyen N [0-20] :
// N! = 1 * 2 * 3  * 4 ...  * N

int main(){
	int n;
	double m = 1;

	do {
		printf("Please input any integer [0 - 20]: ");
		scanf("%d", &n);
	} while (n<0 || n>20);

	for (int i= 1; i<=n; i++) {
		m = m * i;
	}
	printf("%d! = %.0f\n", n, m);
}



