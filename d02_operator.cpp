#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* demo ve cac phep toan so hoc */
int main(){
	int a = 10, b = 3;
	
	printf(">> Phep toan 2 ngoi: \n");
	printf("phep cong : %d + %d = %d \n", a , b, a+b);
	printf("phep tru  : %d - %d = %d \n", a , b, a-b);
	printf("phep nhan : %d * %d = %d \n", a , b, a*b);
	printf("phep chia : %d / %d = %d \n", a , b, a/b);
	printf("phep tinh phan du : %d %% %d = %d \n", a , b, a%b);
	
	printf("\n\n");
	printf(">> Phep toan 1 ngoi: \n");
	printf("a = %d \n", a);
	printf("Phep tang a++ : %d \n", a++);
	printf("Phep tang ++a : %d \n", ++a);
} 



