#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo lap trinh re nhanh co dieu kien : nested if
	- nhap vao 1 nam bat ky, kiem tra day co phai la nam nhuan ko 	
*/

int main(){
	int year;
	
	printf("nhap nam bat ky: ");
	scanf("%d" , &year);
	
	if(year%100==0){
		//day la nam the ky
		if(year%400==0){
			printf(" >> %d la nam nhuan the ky ! \n", year);
		}
		else{
			printf(" >> %d la nam the ky ! \n", year);
		}
	}
	else{
		//ko phai la nam the ky
		if(year%4 == 0){
			printf(" >> %d la nam nhuan ! \n", year);
		}
		else{
			printf(" >> %d la nam binh thuong ! \n", year);
		}
	}
}



