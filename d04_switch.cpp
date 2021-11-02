#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo lap trinh re nhanh co dieu kien : switch-case
	- nhap vao 1 ky tu bat ky, kiem tra day la nguyen am hay phu am
*/
int main() {
	char kt;
	printf("Nhap 1 ky tu bat ky: ");
	scanf("%c", &kt);

	if(kt<'a' || kt>'z') {
		printf(">> %c ko phai la ky tu chu in thuong ! \n", kt);
	} else {
		switch(kt) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf (">> %c la nguyen am !\n", kt);
				break;
			default:
				printf (">> %c la phu am !\n", kt);
				break;
		}
	}
}



