#include <stdio.h>
#include <stdlib.h>
#include "../Header/color.h"
#include "../Header/header.h"

int game(char board[11][11]) {
	print_board(board);	
	int x,y; // x and y are the coordinates
	int turn = 1;
		
	for (int count = 0; count < 81 ; count++){
		if (turn == 1)
		{
			label1 : do {
				fprintf(stdout,"\n");
				fprintf(stdout, Green "\t\tPlayer 1 input your coordinates ");
				fprintf(stdout,Reset);
				fprintf(stdout, "( separate by space ) >> ");
				scanf("%d", &x);
				scanf("%d", &y);
				print_board(board);
			} while ((x < 0|| x > 8) || (y < 0 || y > 8));
			printf("\n");
				
			if (attack1(x,y,board)) // Check if a square is already filled
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, "\t\tYou've already played that move. Try another coordinates.\n");				
				goto label1;
			} 
			else if (attack_O(x,y,board)) // Check if player 1 attack player 2 piece.
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, Red "\t\tPlayer_2 already played that move. Try another coordinates.\n");
				fprintf(stdout, Reset);
				goto label1;
			}	
			board[10-(y+1)][x+1] = 'X';
								
			print_board(board);	

			/* Check if player 1 has won */
			if (check_board(board))
			{
				fprintf(stdout, Green "\t\t\tPLAYER 1 WIN !!!\n\n");
				fprintf(stdout, Reset);
				return EXIT_SUCCESS;								
			}
			turn += 1;		
		}
		
		else if (turn == 2)
		{
			label2 : do {
				fprintf(stdout,"\n");
				fprintf(stdout, Yellow "\t\tPlayer 2 input your coordinates ");
				fprintf(stdout, Reset);
				fprintf(stdout, "( separate by space ) >> ");	
				scanf("%d", &x);
				scanf("%d", &y);
				print_board(board);
			} while ((x < 0|| x > 8) || (y < 0 || y > 8));
			
			printf("\n");
				
			if (attack2(x,y,board)) // Check if a square is already filled
			{
				print_board(board);
				printf("\n");				
				fprintf(stdout, "\t\tYou've already played that move. Try another coordinates.\n");
				goto label2;
			}
			else if (attack_X(x,y,board)) // Check if player 2 attack player 1 piece.
			{
				print_board(board);
				printf("\n");
				fprintf(stdout, Red "\t\tPlayer_1 already played that move. Try another coordinates.\n");
				fprintf(stdout, Reset);
				goto label2;
			}
			board[10-(y+1)][x+1] = 'O';
	
			print_board(board);

			/* Check if player 2 has won */
			if (check_board(board))
			{	
				fprintf(stdout, Yellow "\t\t\tPLAYER 2 WIN !!!\n\n");
				fprintf(stdout, Reset);
				return EXIT_SUCCESS;								
			}
			turn -= 1;		
		}
	}
	fprintf(stdout, "\n\n[ NULL ] \n\n");    
}
