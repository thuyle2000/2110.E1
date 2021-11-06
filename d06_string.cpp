#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve mang ky tu: chuoi ky tu
int main(){
	char fullname[31]; //khai bao 1 chuoi co do dai toi da la 30
	printf("vui long nhap ho ten: ");
	gets(fullname);
	
	printf("Xin chao, %s !\n", fullname);
	
	for(int i=0; i<30; i++){
		printf("%c.", fullname[i]);
	}
}



