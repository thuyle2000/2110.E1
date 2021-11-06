#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo mang chuoi ky tu, chua bang ds ten sinh vien
int main(){
	
	int n =5;
	char name[31];   	//1 chuoi (do dai 30)
	char ds[n][31];	//1 mang chua n- chuoi ky tu (do dai 30)
	
	for(int i=0; i<n; i++){
		printf("nhap ten cua sv thu %d: ", i+1);
		gets(ds[i]);
	}
	
	printf("\n\n Danh sach sinh vien \n");
	for(int i=0; i<n; i++){
		printf(" %s \n", ds[i]);
	}
}



