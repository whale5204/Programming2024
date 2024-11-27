#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID;
	int score;
};

int main(int argc, char *argv[]) 
{
	struct student s[STUDENTNUM];
	int i;
	
	for (i=0; i<STUDENTNUM; i++)
	{
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
	}
	
	int sum;
	double avg;
	
	for (i=0; i<STUDENTNUM; i++)
	{
		sum += s[i].score;
	}
	avg = sum/STUDENTNUM;
	
	int MAXSCORE = s[0].score;
	int MAXSTUDNUM;
	
	for (i=0; i<STUDENTNUM; i++)
	{
		if (s[i].score>MAXSCORE)
		{
			MAXSCORE = s[i].score;
			MAXSTUDNUM = i;
		}
		else
		    continue;
	}
	
	printf("The average of the score: %f\n", avg);
	printf("The hightest score - ID: %d, score: %d\n", s[MAXSTUDNUM].ID, s[MAXSTUDNUM].score);
	
	return 0;
}
