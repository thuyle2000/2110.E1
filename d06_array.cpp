#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang
int main(){
	int a[5]; //khai bao mang chua 5 so nguyen, ten la a. 
	
	a[0] = 10;
	a[1] = 8;
	a[2] = 40;
	a[3] = 6;
	a[4] = 20;
	
	//viet vong lap FOR de truy xuat va in cac gia tri trong mang a
	for(int i=0; i<5; i++){
		printf(" a[%d] = %d \n", i, a[i]);
	} 
}



