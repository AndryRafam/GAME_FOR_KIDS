/* Check if there is a winner or a Null */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Header/header.h"


bool check_board (char board[11][11])
{
	char first;
	
	/* Check rows */
	for (int i = 1; i < 10; i++)
	{
		first = board[i][1];
		if (first == '.')
		{ continue; }
		for (int j = 2; j < 10; j++)
		{
			if (board[i][j] != first)
			{ break; }
			else if (j == 10-1)
			{ return true; }
		}
	}
	/* Check columns */
	for (int i = 1; i < 10; i++)
	{
		first = board[1][i];
		if (first == '.')
		{ continue; }
		for (int j = 2; j < 10; j++)
		{
			if (board[j][i] != first)
			{ break; }
			else if (j == 10 - 1)
			{ return true; }
		}
	}
	
	/* Check left diagonals */
	first = board[1][1];
	if (first != '.')
	{
		for (int i = 2; i < 10; i++)
		{
			if (board[i][i] != first)
			{ break; }
			else if (i == 10 - 1)
			{ return true; }
		}
	}
	
	/* Check right diagonals */
	first = board[1][10 - 1];
	if (first != '.')
	{
		for (int i = 2; i < 10; i++)
		{
			if (board[i][10 - i] != first)
			{ break; }
			else if (i == 10 - 1)
			{ return true; }
		}
	}
	return false;
}
	

