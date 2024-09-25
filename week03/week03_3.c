#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char alph, nextalph;
	int alph_asc, nextalph_asc;
	
	printf("enter a character: ");
	scanf("%c", &alph);
	
	alph_asc = alph;
	nextalph_asc = alph_asc + 1;     //get next alphabet by using AscII code
	nextalph = nextalph_asc;
	
	printf("the next character of %c (%d) is %c (%d)", alph, alph_asc, nextalph, nextalph_asc);
	
	return 0;
}
