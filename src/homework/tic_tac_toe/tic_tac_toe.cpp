//cpp
#include "tic_tac_toe.h"


void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" && first_player != "O")
	{
		throw Error("Player must be X or O");
	}
	else
	{
		player = first_player;
	}
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9");
	}
	else if (player == "")
	{
		throw Error("Must start game first");
	}
	else
	{
		pegs[position - 1] = player;
	}
	set_next_player();
}


void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}
}

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

bool TicTacToe::game_over()
{

	return check_board_full();
}
	
void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

bool TicTacToe::check_row_win()
{

	if (pegs[0] == player && pegs[1] == player && pegs[2] == player)
	{
		return true;
	}
	else if (pegs[3] == player && pegs[4] == player && pegs[5] == player)
	{
		return true;
	}
	else if (pegs[6] == player && pegs[7] == player && pegs[8] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_column_win()
{
	if (pegs[0] == player && pegs[3] == player && pegs[6] == player)
	{
		return true;
	}
	else if (pegs[1] == player && pegs[4] == player && pegs[7] == player)
	{
		return true;
	}
	else if (pegs[2] == player && pegs[5] == player && pegs[8] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == player && pegs[4] == player && pegs[8] == player)
	{
		return true;
	}
	else if (pegs[6] == player && pegs[4] == player && pegs[2] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

}