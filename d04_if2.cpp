#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lenh re nhanh co dieu kien
int main(){
	char c;
	printf("vui long nhap 1 ky tu bat ky : ");
	scanf("%c", &c);
	
	//neu ky tu nhap vao la ky tu chu thuong a-z , thi chuyen ra chu in hoa
	if(c>='a' && c<='z'){
		printf("ky tu in hoa : %c \n", c-32);
	}
	
	printf("cam on ban da su dung chuong trinh !\n");
}



