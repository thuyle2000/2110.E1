#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du ve lap trinh kieu du lieu cau truc chua trong cau truc

//1. dinh nghia mau cau truc ngay-thang-nam [DATE]
struct DATE {
	int day, month, year;
};

//2. dinh nghia mau cau truc ve xem phim: so ve, ten phim, gia, ngay chieu
struct TICKET {
	char id[6];
	char film[31];
	int price;
	struct DATE date;
};

int main() {
	//3. tao 1 bien ten 'vePhim' kieu struct TICKET
	struct TICKET vePhim;

	//4. nhap du lieu cho bien 'vePhim'
	printf("Nhap thong tin chi tiet cho ve xem phim : \n");
	printf(" - so ve: ");
	gets(vePhim.id);
	
	printf(" - ten phim: ");
	gets(vePhim.film);
	
	printf(" - don gia: ");
	scanf("%d", &vePhim.price);
	
	printf(" - ngay chieu: \n");
	printf("   ngay [1-31]: ");
	scanf("%d", &vePhim.date.day);
	printf("   thang [1-12]: ");
	scanf("%d", &vePhim.date.month);
	printf("   nam: ");
	scanf("%d", &vePhim.date.year);
	
	//5.in ra thong tin cua ve xem phim 'vephim'
	printf("\n\n Thong tin cua ve xem phim: \n");
	printf(" - so ve: %s \n", vePhim.id);
	printf(" - tua phim: %s \n", vePhim.film);
	printf(" - don gia: %d \n", vePhim.price);
	printf(" - ngay chieu: %02d-%02d-%d \n", vePhim.date.day, 
	                     vePhim.date.month, vePhim.date.year);

}



