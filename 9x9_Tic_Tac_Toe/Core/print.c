#include <stdio.h>
#include <stdlib.h>
#include "../Header/color.h"
#include "../Header/header.h"

void print_rules ()
{
	fprintf(stdout,Red "\n\t\t\t[ BELOW ARE THE RULES ]\n\n");
	fprintf(stdout,Reset);
	fprintf(stdout,Green "\t\tPlayer 1 on a Green side ");
	fprintf(stdout, Reset); fprintf(stdout,"/");
	fprintf(stdout,Yellow " Player 2 on a Yellow side.\n");
	fprintf(stdout, Reset);
	fprintf(stdout,"\t\tCoordinates are read from down to left\n"); 
	fprintf(stdout,"\t\tExamples: (0,1) means 0th column - 1st line. (6,2) means 6th column - 2nd line.\n\n");
	fprintf(stdout,"\t\t==========================================\n\n");
	return;
}


void print_board (char board[11][11])
{
	system("clear");	
	
	
	fprintf(stdout,"\n\t\t========== 9x9 TIC TAC TOE GAME ==========\n");
	print_rules();
	fprintf(stdout, Reset);			
	for (int i = 0; i < 11; i++)
	{
		fprintf(stdout,"\t\t\t");
		for (int j = 0; j < 11; j++)
		{
			if (board[i][j] == 'X')
				fprintf(stdout, Green " %c  ", board[i][j]);
			else if (board[i][j] == 'O')
				fprintf(stdout, Yellow " %c  ", board[i][j]);
			else 
				fprintf(stdout, " %c  ", board[i][j]);
			fprintf(stdout, Reset);
		}
		fprintf(stdout,"\n\n");
	}
	return;		
}


	

