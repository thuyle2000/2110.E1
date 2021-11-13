#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve mang cau truc
//viet chuong trinh quan ly danh sach cac san pham

//1. dinh nghia mau cau truc san pham : id, name, price
struct PRODUCT {
	char id[6];
	char name[31];
	int price;
};

//2. dat them ten rut gon cho kieu du lieu [struct PRODUCT] la sPRO
typedef struct PRODUCT sPRO;

int main() {
	//3. khai bao 1 bien mang ten [ds] chua 5 san pham
	int n = 5;
	sPRO ds[n];

	//4. vong lap for nhap du lieu cho 5 san pham
	for(int i=0; i<n; i++) {
		fflush(stdin);
		
		printf("\n - nhap thong tin san pham thu %d: \n", i+1);
		printf(" nhap ma sp: ");
		gets(ds[i].id);
		printf(" nhap ten sp: ");
		gets(ds[i].name);
		printf(" nhap don gia: ");
		scanf("%d", &ds[i].price);	
	}
	
	
	//5. vong lap for in ra bang danh sach san pham
	printf("\n\n Danh sach san pham \n");
	for(int i=0; i<n; i++){
		printf("%-6s ", ds[i].id);
		printf("%-20s ", ds[i].name);
		printf("%7d ", ds[i].price);
		printf("\n");
	}
}



