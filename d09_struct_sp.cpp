#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vi du ve lap trinh kieu du lieu cau truc

//dinh nghia 1 mau cau truc mo ta 1 san pham: ma so, ten, don gia
struct PRODUCT{
	char id[6];
	char name[31];
	int price;
}; 

int main(){
	//tao 1 bien bo nho ten sp1, co kieu la [struct PRODUCT], va khoi tao gia tri
	struct PRODUCT sp1 = {"P01","Bun bo hue",32000};
	
	//tao 1 bien bo nho ten sp2, co kieu la [struct PRODUCT], va khoi tao gia tri
	struct PRODUCT sp2 = {"P02","Pho ga",50000};	
	
	//in thong tin san pham sp1 
	printf("\n San pham 1: \n");
	printf(" id = %s, ten = %s, don gia = %d \n", sp1.id, sp1.name, sp1.price  );
	
	//in thong tin san pham sp2 
	printf("\n San pham 2: \n");
	printf(" id = %s, ten = %s, don gia = %d \n", sp2.id, sp2.name, sp2.price  );
}



