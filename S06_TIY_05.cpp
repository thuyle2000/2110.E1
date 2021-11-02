#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char lastName[31];
	char firstName[11];
	
	printf("input first name : ");
	gets(firstName);
	
	printf("input last name : ");
	gets(lastName);
	
	printf("your full name is %s %s \n", lastName , firstName);
}



