#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addMatrix(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS])
{
	int i, j;
	
	for (i=0; i<ROWS; i++)
	{
		for (j=0; j<COLS; j++)
		  c[i][j]=a[i][j]+b[i][j];
	}
	
}

void printMatrix(int c[ROWS][COLS])
{
	int i, j;
	
	for (i=0; i<ROWS; i++)
	{
		for (j=0; j<COLS; j++)
	      printf("%3d", c[i][j]);
	    printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	int A[ROWS][COLS]={ //Addition Element Matrix
	  {2, 3, 0},
	  {8, 9, 1},
	  {7, 0, 5} };
	int B[ROWS][COLS]={ //Addition Element Matrix
	  {1, 0, 0},
	  {0, 1, 0},
	  {0, 0, 1} };
	int C[ROWS][COLS];     //Addition Result Matrix
	
	addMatrix(A, B, C);
	printMatrix(C);
	
	return 0;
}
