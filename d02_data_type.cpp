#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//khai bao bien bo nho [c] de luu gia tri cua nhiet do C
	float c;
	c = 37.8;
	
	//khai bao bien bo nho [f] de luu gia tri cua nhiet do F tuong duong
	float f= c*9/5 + 32;
	
	//in gia tri cua do [c] va [f] len man hinh
	printf("Nhiet do C: %f \n", c);
	printf("Nhiet do F tuong duong: %f \n", f);
}


