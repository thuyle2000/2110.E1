#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	Tac gia : Truong Tri Trung
*/

int main() {
	printf("===Try It Yourself=== \n");
	printf("======Session 9====== \n");
	int z;

	do {
		printf("\n\n Hay chon 1 bai tap [1-5]: ");
		scanf("%d", &z);

		fflush(stdin);
		printf("\n");

		switch(z) {

			case 1: {
				printf("Chuong trinh in day so 100, 95, ..., 5 \n");
				for(int i=100; i > 5; i = i-5) {
					printf("%d, ", i);
				}
				printf("%d. \n", 5);
				break;
			}


			case 2: {
				printf("*** Tinh tong cac so le giua 2 so nhap vao *** \n");
				int num1, num2, sum=0;
				printf("Nhap so thu 1: ");
				scanf("%d", &num1);

				printf("Nhap so thu 2: ");
				scanf("%d", &num2);

				if(num1<num2) {
					for(int i=num1; i<=num2; i++) {
						if(i%2!=0) {
							sum = sum + i;
						}
					}
				} else {
					for(int i=num2; i<=num1; i++) {
						if(i%2!=0) {
							sum = sum + i;
						}
					}
				}
				printf("Tong cac so le giua %d va %d la: %d \n", num1, num2, sum);


				//goi y solution cua co				
				int start = (num1 < num2) ? num1 : num2; 	//start la so nho hon giua n1 va n2
				int stop = (num1 > num2) ? num1 : num2;	//stop la so lon hon giua n1 va n2

				start = (start%2==0) ? start+1 : start;	//start luon la so le dau tien
				sum = 0;
				printf("\n Tong cac so le giua %d va %d : \n", num1, num2);
				for(int i=start; i<=stop; i+=2) {
					sum = sum + i;
					printf("+ %d ", i);
				}
				printf(" = %d \n", sum);
				
				break;
			}

			case 3: {
				printf("***Chuong trinh in day so Fibonacci*** \n");
				int a;
				int n1=1, n2=1, n3;
				do {
					printf("Nhap so phan tu cua day so Fibonacci [>2]: ");
					scanf("%d", &a);
				} while(a<=2);

				printf("Day so Fibonacci: 1, 1, ");
				for(int i=3; i<a; i++) {
					n3 = n1 + n2;
					printf("%d, ", n3);
					n1 = n2;
					n2 = n3;
				}
				n3 = n1 + n2;
				printf("%d ", n3);
				break;
			}


			case 4: {
				int n;
				printf("Nhap vao 1 so nguyen: ");
				scanf("%d", &n);
				
				for(int i=1; i<=n; i++) {
					//in 1 dong so: 1. 12. 123. 1234 (vi du n=4)
					for(int j=1; j<=i; j++) {
						printf("%d", j);
					}
					printf("\n"); // xuong hang
				}
				printf("\n");
				

				for(int i=n; i>=1; i--) {
					//in 1 dong so: 1234. 123. 12. 1 (vi du n=4)
					for(int j=1; j<=i; j++) {
						printf("%d", j);
					}
					printf("\n");
				}
				break;
			}


			case 5: {
				for(int i=7; i>=1; i--) {
					for(int j=1; j<=i; j++) {
						printf("*");
					}
					printf("\n");
				}
				break;
			}


			default :
				exit(0);

		}
	} while(1);
}

