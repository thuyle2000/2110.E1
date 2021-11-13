#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve mang cau truc
//viet chuong trinh quan ly danh sach cac san pham:
//    nhap ds sp va in ra ds theo thu tu tang dan cua cot don gia

//1. dinh nghia mau cau truc san pham : id, name, price
struct PRODUCT {
	char id[6];
	char name[31];
	int price;
};

//2. dat them ten rut gon cho kieu du lieu [struct PRODUCT] la sPRO
typedef struct PRODUCT sPRO;

int main() {
	//3. khai bao 1 bien mang ten [ds] chua n-san pham
	int n;

	while(1) {
		printf(" nhap so san pham muon quan ly [3, 10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}

	sPRO ds[n];


	//4. vong lap for nhap du lieu cho n-san pham
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
	for(int i=0; i<n; i++) {
		printf("%-6s ", ds[i].id);
		printf("%-20s ", ds[i].name);
		printf("%7d ", ds[i].price);
		printf("\n");
	}


	//6. xep thu tu cac sp theo cot don gia tang dan
	sPRO temp;
	for(int i=0; i<n-1; i++) {
		for(int k=0; k<n-1-i; k++) {
			if(ds[k].price> ds[k+1].price) {
				temp = ds[k];
				ds[k] = ds[k+1];
				ds[k+1] = temp;
			}
		}
	}

	//7. vong lap for in ra bang danh sach san pham da dc xep thu tu
	printf("\n\n Danh sach san pham theo thu tu don gia \n");
	for(int i=0; i<n; i++) {
		printf("%-6s ", ds[i].id);
		printf("%-20s ", ds[i].name);
		printf("%7d ", ds[i].price);
		printf("\n");
	}

	//in san pham co don gia thap nhat
	printf("\n\n San pham co don gia thap nhat:  \n");
	printf("%-6s ", ds[0].id);
	printf("%-20s ", ds[0].name);
	printf("%7d ", ds[0].price);
	printf("\n")
}



