//cpp
#include "tic_tac_toe_manager.h"

TicTacToeManager::TicTacToeManager(TicTacToeData & data)
{
	games = data.get_games();
	for (auto& game : games)
	{
		update_winner_count(game->get_winner());
	}
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));

}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & t)
{
	x = x_win;
	o = o_win;
	t = tie;
}

TicTacToeManager::~TicTacToeManager() // destructor
{
	data.save_pegs(games);
}

void TicTacToeManager::update_winner_count(std::string winner)
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
	for (auto& game : manager.games) 
	{
		out << *game<<"\n";
	}

	return out;
}
