#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo pointer with string
int main(){
	char c;
	char s[81];
	char *p;
	
	printf(" - nhap 1 chuoi bat ky : ");
	gets(s);
	
	printf(" - nhap 1 ky tu bat ky : ");
	scanf("%c", &c);
	
	p = strchr(s, c);
	
	if(p==NULL){
		printf(" Ko tim thay [%c] trong chuoi [%s] !\n", c, s);
	}
	else{
		printf(" Tim thay ky tu [%c] tai vi tri [%d] \n", c, p-s);
	}
	
}



