#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cac ham xu ly chuoi
//strchr(s1, c); // tra ve null neu c ko ton tai trong s1 

int main(){
	char fullname[31];
	char ch;
	
	printf("nhap ho va ten: ");
	gets(fullname);
	
	printf("nhap 1 ky tu bat ky: ");
	scanf("%c", &ch);
	
	if( strchr(fullname, ch) ){
		printf("ky tu [%c] duoc tim thay trong chuoi [%s] \n", ch, fullname);
	}
	else{
		printf("KO TIM THAY ky tu [%c] trong chuoi [%s] \n", ch, fullname);
	}
	
	
}



