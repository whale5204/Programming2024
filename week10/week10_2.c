#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
int main(int argc, char *argv[]) 
{
	int i;
	int grade[SIZE];
	printf("Enter 5 people's scores.\n");
	
	for (i=0; i<SIZE; i++)
	  scanf("%d", &grade[i]);
	
	for (i=0; i<SIZE; i++)
	  printf("grade[%d]=%d\n", i, grade[i]);
	
	return 0;
}
*/

int main(int argc, char *argv[]) 
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum=0;
	for (i=0; i<SIZE; i++)
	{
		printf("Enter your student's grade: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	average=sum/SIZE;
	printf("Average grade: %d\n", average);
	
	return 0;
}
