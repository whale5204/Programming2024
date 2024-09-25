#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1, num2;
	float num1_float, num2_float, result;
	
	printf("enter two integers: ");
	scanf("%i, %i", &num1, &num2);
	
	num1_float = num1, num2_float = num2;
	result = num1_float/num2_float;
	
	printf("%f / %f = %f", num1_float, num2_float, result);
	
	return 0;
}
