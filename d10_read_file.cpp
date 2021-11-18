#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve chuc nang doc file van ban
int main() {
	char filename[] = "baihat.txt";
	FILE *f;
	
	//b1. open file de doc
	f = fopen(filename, "r");
	
	//b2. doc het du lieu trong file va xuat len man hinh
	char line[81];
	while(!feof(f)){
		fgets(line, sizeof(line), f);
		printf("%s", line);
	}
	
	//b3. dong file
	fclose(f);
	
	printf("\n Finished !");
}



