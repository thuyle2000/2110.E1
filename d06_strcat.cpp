#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cac ham xu ly chuoi
// strcat(s1, s2) => s1= s1 + s2
int main(){
	char s1[81]="Nguyen ";
	char s2[31]="Tien Dat";
	
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2);
	printf("After strcat(s1, s2): \n");
	strcat(s1,s2);
	printf("s1 = %s \n", s1);
	
}



