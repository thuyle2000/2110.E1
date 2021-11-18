#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve cac ham fseek, ftell ; muon biet kich thuoc cua tap tin baihat.txt
int main() {
	char filename[] = "baihat.txt";
	FILE *f;

	//b1. open file de doc
	f = fopen(filename, "rb");
	
	//b2. di chuyen con tro curp den cuoi file
	fseek(f, 0, 2);
	
	//b3. lay duoc kich thuoc tap tin
	long size = ftell(f);
	
	printf("Kich thuoc cua tap tin [%s] : %d bytes\n", filename, size);
}



