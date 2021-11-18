#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve chuc nang doc file nhi phan
int main() {
	char filename[] = "baihat.txt";
	FILE *f;
	
	//b1. open file de doc
	f = fopen(filename, "rb");
	
	//b2. doc het du lieu trong file
	int buffer[200];
	while(!feof(f)){
		fread(buffer,sizeof(buffer),1, f);
		printf("%s", buffer );
	}
	
	
	//b3. dong file
	fclose(f);
	
	printf("\n\n Finished !");
}



