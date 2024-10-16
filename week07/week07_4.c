#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
	int n;
	
	printf("Enter the value: ");
	scanf("%i", &n);
	
	return n;
}

int factorial(int n)
{
	int i, res=1;
	
	for (i=1; i<=n; i++)
	  res*=i;
	
	return res;
}

int combination(int n, int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(int argc, char *argv[]) 
{
	int n, r, result;
	
	n=get_integer();
	r=get_integer();
	
	result=combination(n, r);
	
	printf("The result of C(%i, %i) is %i", n, r, result);
	
	return 0;
}
