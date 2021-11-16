#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//quan ly ds nhan vien

//1. dinh nghia mau cau truc nhan vien, ngay
struct DATE {
	int dd,mm,yy;
};

struct EMPLOYEE {
	char ID[5], name[31];
	int salary;
	struct DATE joinedDate;
};

void inDS(int n, struct EMPLOYEE ds[]);
void inDSNV10(int n, struct EMPLOYEE ds[]);

int main() {
	int n;

	//nhap gia tri n
	while(1) {
		printf("Nhap so luong nv muon quan ly [2-10]: ");
		scanf("%d", &n);
		if(n>=2 && n<=10) {
			break;
		}
	}

	//khai bao mang gom co n-nhanvien
	struct EMPLOYEE ds[n];

	//2. nhap du lieu cho n-nhanvien
	for(int i=0; i<n; i++) {
		fflush(stdin);

		printf(" >> nhap thong tin nhan vien thu %d: \n", i+1);
		printf("    nhap id: ");
		gets(ds[i].ID);
		printf("    nhap ten: ");
		gets(ds[i].name);
		printf("    nhap luong co ban: ");
		scanf("%d", &ds[i].salary);
		printf("    nhap ngay vao lam viec: \n");
		printf("       - ngay [1-31]: ");
		scanf("%d", &ds[i].joinedDate.dd);
		printf("       - thang [1-12]: ");
		scanf("%d", &ds[i].joinedDate.mm);
		printf("       - nam : ");
		scanf("%d", &ds[i].joinedDate.yy);
	}

	//3. in ra bang ds nhan vien
	inDS(n, ds);

	//4. tao menu de thuc hien viec tang luong va in ds nv lam viec tren 10 nam
	int op=0;
	while(1) {
		printf("\n\n  MENU \n");
		printf(" 1. tang luong \n");
		printf(" 2. in ds nhan vien lam viec tren 10 nam \n");
		printf(" 3. ket thuc \n");
		printf(" chon chuc nang muon thuc hien [1-3]:  ");
		scanf("%d", &op);

		switch(op) {
			case 1:
				for(int i=0; i<n; i++) {
					if(ds[i].salary<2000) {
						ds[i].salary = ds[i].salary*115/100;
					} else if(ds[i].salary<=5000) {
						ds[i].salary = ds[i].salary*110/100;
					}
				}

				inDS(n, ds);
				break;

			case 2:
				inDSNV10(n, ds);
				break;
				
			case 3:
				return 0;
		}
	}


}

void inDS(int n, struct EMPLOYEE ds[]) {
	printf("\n\n Danh sach nhan vien \n");
	for(int i=0; i<n; i++) {
		printf("%-5s ", ds[i].ID);
		printf("%-10s ", ds[i].name);
		printf("%6d ", ds[i].salary);
		printf(" %02d-%02d-%d \n", ds[i].joinedDate.dd, ds[i].joinedDate.mm,
		       ds[i].joinedDate.yy);
	}

}

void inDSNV10(int n, struct EMPLOYEE ds[] ) {
	printf("\n\n Danh sach nhan vien lam viec tren 10 nam \n");
	int currentYear=2021;
	int cnt=0;
	
	for(int i=0; i<n; i++) {
		if(currentYear -ds[i].joinedDate.yy >=10) {
			printf("%-5s ", ds[i].ID);
			printf("%-10s ", ds[i].name);
			printf("%6d ", ds[i].salary);
			printf(" %02d-%02d-%d \n", ds[i].joinedDate.dd, ds[i].joinedDate.mm,
			       ds[i].joinedDate.yy);
			       
			cnt++;
		}
	} // ket thuc vong lap for
	
	printf(" >> Co %d nhan vien lam viec tren 10 nam \n", cnt);

}


