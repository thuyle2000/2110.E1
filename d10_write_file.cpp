#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve chuc nang ghi file van ban
int main(){
	
	char filename[] = "baihat.txt";
	FILE *f;
	
	//b1. open file de luu noi dung 1 bai hat
	f = fopen(filename,"w");
	
	//b2. ghi 1 so dong van ban vo bai hat nay
	fputs("Silent Night\n", f);
	fputs("=========== \n", f);
	fputs("Silent night, holy night\n", f);
	fputs("All is calm and all is bright\n", f);
	fputs("Round yon virgin, mother and child\n", f);
	fputs("Holy infant, so tender and mild\n", f);
	fputs("Sleep in heavenly peace, ooh\n", f);
	fputs("Sleep, sleep in heaven, heavenly peace\n", f);
	fputs("... \n", f);
	
	
	//b3. dong file
	fclose(f);
	
	printf("Finished !");
}



