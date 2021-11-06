#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cac ham xu ly chuoi
//strstr(s1, s2); // tra ve null neu s2 ko ton tai trong s1 

int main(){
	char fullname[31];
	char name[10];
	
	printf("nhap ho va ten: ");
	gets(fullname);
	
	printf("nhap ten: ");
	gets(name);
	
	if( strstr(fullname, name) ){
		printf("chuoi [%s] duoc tim thay trong chuoi [%s] \n", name, fullname);
	}
	else{
		printf("KO TIM THAY chuoi [%s] trong chuoi [%s] \n", name, fullname);
	}
	
	
}



