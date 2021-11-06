#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve cac ham xu ly chuoi
// strcpy(s1, s2) => s1=s2
int main() {
	char s1[31], s2[31];
	printf("nhap chuoi bat ky: ");
	gets(s2);

	//gan s2 cho s1
	strcpy(s1, s2);
	
	printf("s1 = %s \n", s1);
}



