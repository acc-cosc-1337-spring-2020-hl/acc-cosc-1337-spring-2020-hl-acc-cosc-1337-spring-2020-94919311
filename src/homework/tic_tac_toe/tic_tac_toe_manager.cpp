//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);

}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & t)
{
	x = x_win;
	o = o_win;
	t = tie;
}

void TicTacToeManager::update_winner_count(string)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else
	{
		tie += 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto game : manager.games) 
	{
		out << game;
	}

	return out;
}
