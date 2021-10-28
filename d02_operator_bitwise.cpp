#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* demo phep toan luan ly nhi phan */
int main() {
	int a = 10, b =15;
	printf(">> Phep toan luan ly nhi phan (bitwise logical): \n");
	printf(" bitwise and: %d & %d = %d \n", a, b, a&b);
	printf(" bitwise or : %d | %d = %d \n", a, b, a|b);
	printf(" bitwise xor: %d ^ %d = %d \n", a, b, a^b);
	printf(" bitwise not: ~%d = %d \n", a, ~a);
}



