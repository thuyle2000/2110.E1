#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve lap trinh ham de qui (ham tu goi chinh no)
//khai bao prototype cua ham tinh giai thua so nguyen n
double factorial(int n);

int main(){
	int n;
	printf(">> Chuong trinh tinh giai thua cua so nguyen N \n");
	
	while(1){
		printf(" nhap so nguyen N [0-30]: ");
		scanf("%d", &n);
		if(n>=0 && n<=30){
			break; //nhap dung=>thoat vong lap
		}
	}
	
	printf("\n >> %d! = %.0f \n", n, factorial(n));
}

// n!= n * (n-1)*(n-2)* .. *2*1 = n * (n-1)!
// 0!=1
// 1!=1
double factorial(int n){
	if(n==1) return 1;
	return n * factorial(n-1);
}

