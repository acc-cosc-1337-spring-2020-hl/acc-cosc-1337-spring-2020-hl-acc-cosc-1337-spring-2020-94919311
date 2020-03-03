//cpp
#include "tic_tac_toe.h"


void TicTacToe::start_game(string first_player)
{
	if (first_player != X && first_player != O)
	{
		throw Error("Player must be X or O");
	}
	else
	{
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	while (position != 1, 2, 3, 4, 5, 6, 7, 8, 9)
	{
		throw Error("Position must be 1 to 9");
	}
	if (player = "")
	{
		throw Error("Must start game first");
	}

}