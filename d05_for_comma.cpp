#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap for : toan tu dau phay (commas)
int main(){
	int a;
	printf("vui long nhap 1 so nguyen: ");
	scanf("%d", &a);
	
	for(int i=0, j=a; i<=a; i++, j-- ){
		printf(" %d + %d = %d \n", i, j, i+j);
	}
}



