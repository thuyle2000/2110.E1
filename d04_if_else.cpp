#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo lenh re nhanh co dieu kien: if-else
//kiem tra 1 so nguyen duoc nhap la so chan hay le
int main(){
	int n;
	
	printf("vui long nhap 1 so nguyen bat ky: ");
	scanf("%d", &n);
	
	//kiem tra n la so chan hay le
	if(n%2 == 0){
		printf(" %d la so chan ! \n", n);
	}
	else{
		printf(" %d la so le ! \n", n);
	}
}



