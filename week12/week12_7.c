#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *proverb = "All that glisters is not gold.";

void setPointer(char **q)
{
	*q = proverb;
}

//swap sentence
int main(int argc, char *argv[]) 
{
	char *p = "zzz";
	
	setPointer(&p);
	printf("%s\n", p);
	
	return 0;
}

/*
int main(int argc, char *argv[]) 
{
	char *p = "zzz";
	
	setPointer(p);
	printf("%s\n", p);
	
	return 0;
}
*/