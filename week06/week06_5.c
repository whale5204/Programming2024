#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1, num2, result;
	char cal;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &num1, &cal, &num2);
	
	switch (cal)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
		case '*':
			result=num1*num2;
			break;
		case '/':
			result=num1/num2;
			break;
	}
	
	printf("= %i\n", result);
	
	return 0;
}
