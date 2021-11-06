#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve cac ham xu ly chuoi
// strcpy(s1, s2) => s1=s2 -

int main() {
	
	char s1[31], s2[31], temp[31];
	printf("nhap chuoi thu 1: ");
	gets(s1);

	printf("nhap chuoi thu 2: ");
	gets(s2);
	
	//hoan chuyen noi dung cua s1 va s2
	strcpy(temp, s1); //cat s1 vo bien temp
	strcpy(s1, s2);	//s1 = s2
	strcpy(s2, temp);  //s2 = temp (s1)
	
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2);
}



