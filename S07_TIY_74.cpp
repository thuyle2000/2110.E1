#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TIY 7.4

int main() {
	int basic,salary;
	char grade;
	printf(">>Calculate the salary at the end of the month \n");
	printf("Enter basic salary:");
	scanf("%d", &basic);
	fflush(stdin);

	printf("Enter grade [A - Z]: ");
	scanf("%c", &grade);

	if((grade>='a' && grade<='z') || (grade>='A' && grade<='Z')) {
		switch(grade) {
			case 'A':
			case 'a':
				printf("Allowance:  %d \n",300);
				printf("End month Salary: %d $ \n", salary=basic+300);
				break;
			case 'B':
			case 'b':
				printf("Allowance:  %d \n",250);
				printf("End month Salary: %d $ \n", salary=basic+250);
				break;
			default:
				printf("Allowance:  %d \n",100);
				printf("End month Salary: %d $ \n", salary=basic+100);
				break;
		}
	}else{
		printf(" >> Invalid Grade !!! \n");
	}
}



