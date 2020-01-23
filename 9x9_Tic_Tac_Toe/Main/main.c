/* Andry RAFAM ANDRIANJAFY

9x9 TIC TAC TOE game. Implemented under Linux Ubuntu 16.04 LTS.

GCC Version 6.5.0 && GNU Debugger GDB 8.2 */


#include <stdio.h>
#include <stdlib.h>
#include "../Header/color.h"
#include "../Header/header.h"

/*Main program*/			
int main(){
	char board[11][11] = { {' ','_','_','_','_','_','_','_','_','_',' '},
					   {'8','.','.','.','.','.','.','.','.','.', '|'}, 
					   {'7','.','.','.','.','.','.','.','.','.', '|'},
					   {'6','.','.','.','.','.','.','.','.','.', '|'},
					   {'5','.','.','.','.','.','.','.','.','.', '|'},
					   {'4','.','.','.','.','.','.','.','.','.', '|'}, 
					   {'3','.','.','.','.','.','.','.','.','.', '|'},
					   {'2','.','.','.','.','.','.','.','.','.', '|'},
					   {'1','.','.','.','.','.','.','.','.','.', '|'},
					   {'0','.','.','.','.','.','.','.','.','.', '|'},
					   {'#','0','1','2','3','4','5','6','7','8','#'} };
					
					  	
	int choice;
	system("clear");
	fprintf(stdout,"\n\n\t\t\t[Make a choice. 1) Start a Game  2) Launch a Demonstration] >> ");
	fscanf(stdin, "%d", &choice);
	if (choice == 1){
		game(board);
		return EXIT_SUCCESS;
	}
	else {
		test(board);
		return EXIT_SUCCESS;
	}
}
		

		
	
