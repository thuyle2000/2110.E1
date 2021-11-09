
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Author : Nguyen Ngoc Bich Van */
int main() {
	char op;

	//menu
	while(1) {
		printf("\n MENU- Homework session 9&10 \n");
		printf("1. TIY 10.1 (sort names) \n");
		printf("2. TIY 10.2 (count vowel)\n");
		printf("3. TIY 10.3 (Reverses the array) \n");
		printf("4. TIY 11.1 (Min / Max)\n");
		printf("5. TIY 11.2 \n");
		printf("6. Exit \n");
		printf("enter your choice [1-6] : ");
		scanf("%d", &op);

		switch(op) {
			case 1: {
				int n = 7;

				char array[n][10] = {"George", "Albert", "Tina","Xavier","Roger", "Tim","William" };
				char temp[10];
				int i,j;

				for(i=0; i<n-1; i++) {
					for(j=0; j<n-1-i; j++) {
						if(strcmp(array[j],array[j+1])>0) {
							strcpy(temp,array[j+1]);
							strcpy(array[j+1],array[j]);
							strcpy(array[j],temp);
						}
					}
				}

				printf("The following names in alphabetical order: \n");
				for(i=0; i<n; i++) {
					printf("%s \n", array[i]);
				}
				break;
			}


			case 2: {
				int i,count=0;
				char text[100];
				printf("Input: ");
				fflush(stdin);
				gets(text);

				strlwr(text); // chuyen noi dung chuoi text -> chu thuong

				for(i=0; i<(strlen(text)); i++) {
					if(text[i]=='a'
					        ||text[i]=='e'
					        ||text[i]=='o'
					        ||text[i]=='i'
					        ||text[i]=='u') {
						count++;
					}
				}
				printf(">> The number of vowels in a line of text:%d \n", count);
				break;
			}

			case 3: {
				int n = 5;
				int array[n];
				int i,j , temp;

//				array[0]=34;
//				array[1]=45;
//				array[2]=56;
//				array[3]=67;
//				array[4]=89;
				for(i=0; i<n; i++) {
					printf("nhap array[%d]: ", i);
					scanf("%d", &array[i]);
				}

				for(i=0, j=n-1; i<=n/2; i++, j--) {
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}

				printf(">> Reverses the array: \n");
				for(i=0; i<5; i++) {
					printf("%d \n",array[i]);
				}
				break;
			}

			case 4: {
				int array[] = {23,2,15,30,10};
				int min, max;
				for(int x=0; x<5; x++) {
					printf("%d, ", array[x]);
				}
				printf("\n\n");

				min= max= array[0];

				for(int i=1; i<5; i++) {

					if(array[i]<min) {
						min=array[i];
					}
					if(array[i]>max) {
						max=array[i];
					}
				}

				printf(">> The minimum value in an array:%d \n",min);
				printf(">> The maximum value in an array:%d \n",max);
				break;
			}


			case 5: {
				int i,countVowels,countConsonants;
				char text[300];
				printf("Input: ");
				fflush(stdin);
				gets(text);
				for(i=0; i<(strlen(text)); i++) {
					if((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z')) {
						switch(text[i]) {
							case 'a':
							case 'e':
							case 'i':
							case 'o':
							case 'u':
							case 'A':
							case 'E':
							case 'I':
							case 'O':
							case 'U':
								countVowels++;
								break;
							default:
								countConsonants++;
								break;
						}
					}
				}
				printf(">> The number of vowels in a wordt:%d \n", countVowels);
				printf(">> The number of consonants in a word:%d \n", countConsonants);
				break;
			}
			case 6:
				exit(0);

			default:
				printf("invalid choice !!!! \n");
				break;
		}

	}
}


