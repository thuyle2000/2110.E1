#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* demo ve cach dung ham printf() */
int main(){
	int a = 1256, b = 341;
	float price=1983.141516;
	char ch = 'y';
	char name[80] = "Pham Anh Doan";
	
	printf("Ho ten sinh vien: %s \n", name);
	printf("Tinh trang dang hoc : %c \n", ch);
	printf("============================== \n\n");
	
	printf("%d + %d = %d \n\n", a, b, a+b);
	
	printf("Don gia = %f (format code %%f) \n", price);
	printf("Don gia = %e (format code %%e) \n", price);
	printf("Don gia = %g (format code %%g) \n\n", price);
	
	printf("a = %d  (format code %%d)\n", a);
	printf("a = %X  (format code %%X)\n", a);
	printf("a = %o  (format code %%o)\n", a);

	
	
}



