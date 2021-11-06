#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cac ham xu ly chuoi
// strlen(s1) => do dai chuoi s1
int main(){
	char fullname[31];
	
	printf("nhap ho ten: ");
	gets(fullname);
	
	int n = strlen(fullname);
	printf(">> tong cong %d ky tu !\n", n);
	
	for(int i=0; i<n; i++){
		printf("%c.", fullname[i]);
	}
}



