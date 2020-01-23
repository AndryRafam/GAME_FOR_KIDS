#include <stdbool.h>
#ifndef header_h_
#define header_h_

bool check_board (char board[11][11]);

bool attack1 (int x, int y, char board[11][11]);

bool attack2 (int x, int y, char board[11][11]);

bool attack_X (int x, int y, char board[11][11]);

bool attack_O (int x, int y, char board[11][11]);

void print_board (char board[11][11]);

void print_rules();

int game(char board[11][11]);

int test(char board[11][11]);

#endif
