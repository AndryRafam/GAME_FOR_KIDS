#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Header/header.h"

/* Functions which checks if a square is empty or not */

bool attack_O (int x, int y, char board[11][11])
{
	if (board[10-(y+1)][x+1] == 'O')
	{ return true; }
	else
	{ return false; }
}

bool attack_X (int x, int y, char board[11][11])
{
	if (board[10-(y+1)][x+1] == 'X')
	{ return true; }
	else
	{ return false; }
}

bool attack1 (int x, int y, char board[11][11])
{
	if (board[10-(y+1)][x+1] != '.' && board[10-(y+1)][x+1] != 'O')
	{ return true; }
	else
	{return false; }
}

bool attack2 (int x, int y, char board[11][11])
{
	if (board[10-(y+1)][x+1] != '.' && board[10-(y+1)][x+1] != 'X')
	{ return true; }
	else
	{ return false; }
}
