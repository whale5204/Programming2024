#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	FILE *fp;
	char str[20];
	char *c;
	
	fp = fopen("sample.txt", "r");
	
	if (fp==NULL)
	  printf("Can't open the file\n");
	
	while ((c=fgets(str, 20, fp))!=NULL)
		printf("%s", c);
	
	fclose(fp);
	
	return 0;
}
