//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12 //내가 가지고 있는 코인 개수 
#define MAX_COIN        4  //한번에 가질 수 있는 최대 코인 개수 
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    //coin allocation
    //이렇게 복잡하게까지 해야하나...? 일단 고민해봄 
    int total_coin = 0;    //for counting total coin on board
    for (i=0; i<N_COINPOS; i++)
    {
    	while (total_coin < N_COINPOS)
		{
		    int coinpos = rand()%(N_BOARD + 1);  //random coin's position
		    if (board_coin[coinpos] == 0)
			{
				//i-th coin allocation
			    board_coin[coinpos] = rand()%(MAX_COIN) + 1;
			    total_coin += board_coin[coinpos];
			    //if total_coin > N_COINPOS in the end of the result
			    if (total_coin > N_COINPOS)
			    {
			    	board_coin[coinpos] -= total_coin - N_COINPOS;
				}
			}
		}
	//checking 
	for (i=0; i<N_BOARD; i++)
	{
		printf("%d", board_coin[i]);
	}
	printf("\n");
	}
	//
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
   
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int i;
	int sharkstep = rand()%(MAX_SHARKSTEP) + 1;    //sharkstep in one turn
	//make boardstatus "X"
	for (i=shark_position; i<(shark_position + sharkstep); i++)
	{
		board_status[i] = BOARDSTATUS_NOK;
	}
	shark_position += sharkstep;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
