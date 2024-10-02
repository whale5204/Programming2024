#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x, y;
	
	printf("Input two integers: ");
	scanf("%i %i", &x, &y);
	
	printf("& result is %i\n| result is %i\n^ result is %i\n<<1 result is %i\n>>1 result is %i\n", x&y, x|y, x^y, x<<1, x>>1);
	
	return 0;
}
