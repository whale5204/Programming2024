#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int ans, trial, trial_num=1;
	ans=40;
	
	do
	{
	printf("Guess a number: ");
	scanf("%i", &trial);
	
	if (trial>ans)
	  printf("Low!\n");
	else if (trial<ans)
	  printf("High!\n");
	else if (trial==ans)
	  printf("Congratulations! Trials: %i", trial_num);

	trial_num++;
	}
	while (trial!=ans);
	
	return 0;
}
