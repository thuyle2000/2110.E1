#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve cac ham xu ly chuoi
//strcmp(s1, s2); 
int main(){
	char s1[]="Nhat Trung";
	char s2[]="Anh Xuan";
	char s3[]="Nhat Trung";
	
	int r1= strcmp(s1, s2);
	int r2= strcmp(s1, s3);
	int r3= strcmp(s2, s1);
	
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2);
	printf("s3 = %s \n\n", s3);
	
	printf("strcmp(s1, s2) = %d \n", r1);
	printf("strcmp(s1, s3) = %d \n", r2);
	printf("strcmp(s2, s1) = %d \n", r3);
	
}



