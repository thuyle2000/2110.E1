#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Q1();
void Q2();
int main() {
	//menu
	int op=0;
	while(1) {
		system("cls");
		printf("****************************************************\n");
		printf("* Selecting appropriate action:                    *\n");
		printf("* 1. Question 1                                    *\n");
		printf("* 2. Question 2                                    *\n");
		printf("* 3. Quit program                                  *\n");
		printf("****************************************************\n");
		printf(" pls choice option [1-3] : ");

		scanf("%d", &op);
		switch(op) {
			case 1:
				Q1();
				break;
			case 2:
				Q2();
				break;
			case 3:
				return 0;
		}
		system("pause");
	}
}

void Q1() {
	int a[100];
	int cnt=0;
	char op;

	//vong lap nhap day so nguyen
	while(1) {
		printf(" nhap so nguyen duong: ");
		scanf("%d", &a[cnt]);
		cnt++;

		fflush(stdin);
		printf(" tiep tuc nhap so ke ? [y/n] : " );
		scanf("%c", &op);
		if(op=='y' || op=='Y') {
			continue;
		}
		break;
	}

	//di tim so lon nhat
	int max = a[0];
	for(int i=0; i<cnt ; i++) {
		if(a[i]>max) {
			max = a[i];
		}
	}

	//in ra so lon nhat
	printf(">> So lon nhat la :  %d \n\n", max);
}

struct STUDENT {
	char id[10], name[31];
	int eng, mat, sce;
};

void Q2() {
	int n;

	//nhap gia tri n
	while(1) {
		printf("Nhap so luong sinh vien muon quan ly [2-10]: ");
		scanf("%d", &n);
		if(n>=2 && n<=10) {
			break;
		}
	}

	//khai bao mang chua n-sinh vien
	struct STUDENT ds[n];

	//2. nhap du lieu cho n-sinh vien
	for(int i=0; i<n; i++) {
		fflush(stdin);

		printf(" >> nhap thong tin sinh vien thu %d: \n", i+1);
		printf("    nhap id: ");
		gets(ds[i].id);
		printf("    nhap ten: ");
		gets(ds[i].name);
		printf("    nhap diem toan: ");
		scanf("%d", &ds[i].mat);
		printf("    nhap diem anh: ");
		scanf("%d", &ds[i].eng);
		printf("    nhap diem khoa hoc: ");
		scanf("%d", &ds[i].sce);
	}

	//in ra bang danh sach sinh vien
	printf("\n\n Bang danh sach sinh vien \n");
	for(int i=0; i<n; i++){
		printf(" >> sinh vien thu %d: \n", i+1);
		printf("     ho ten : %s \n", ds[i].name);
		printf("     ma so : %s \n", ds[i].id);
		printf("     diem anh : %d\n", ds[i].eng);
		printf("     diem toan : %d\n", ds[i].mat);
		printf("     diem khoa hoc : %d\n", ds[i].sce);
		printf("     * tong diem : %d\n", ds[i].eng+ds[i].mat+ds[i].sce);
		printf("     * binh quan : %d\n", (ds[i].eng+ds[i].mat+ds[i].sce)/3);
	}

}

