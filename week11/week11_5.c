#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char input_1[20];
	char input_2[20];
	char input_3[20];
		
	FILE *fp = NULL;
	
	fp = fopen("sample.txt", "w");
	
	printf("input a word: ");
	scanf("%s", &input_1);
	fprintf(fp, "%s\n", input_1);
	printf("input a word: ");
	scanf("%s", &input_2);
	fprintf(fp, "%s\n", input_2);
	printf("input a word: ");
	scanf("%s", &input_3);
	fprintf(fp, "%s\n", input_3);
	
	fclose(fp);
	
	return 0;
}
