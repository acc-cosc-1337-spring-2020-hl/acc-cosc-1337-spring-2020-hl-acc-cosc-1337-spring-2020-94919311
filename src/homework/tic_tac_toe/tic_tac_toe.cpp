//cpp
#include "tic_tac_toe.h"


void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" && first_player != "O")
	{
		throw Error("\nPlayer must be X or O\n");
	}
	else
	{
		next_player = first_player;
	}
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9\n");
	}
	else if (next_player == "")
	{
		throw Error("Must start game first\n");
	}
	else
	{
		pegs[position - 1] = next_player;
		if (!game_over())
		{
			set_next_player();
		}
	}
	
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
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
	if (check_column_win())
	{
		set_winner();
		return true;
	}
	else if (check_row_win())
	{
		set_winner();
		return true;
	}
	else if (check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
		return true;
	}
	else
	{
		false;
	}
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
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & game)
{
	if (game.pegs.size() == 9)
	{
		for (int i = 0; i < 9; i += 3)
		{
			out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
		}
	}
	else
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "|" << game.pegs[i + 3] << "\n";
		}
	}

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & game)
{
	int loc;
	cout << "Enter position: ";
	std::cin >> loc;
	game.mark_board(loc);

	return in;
}
