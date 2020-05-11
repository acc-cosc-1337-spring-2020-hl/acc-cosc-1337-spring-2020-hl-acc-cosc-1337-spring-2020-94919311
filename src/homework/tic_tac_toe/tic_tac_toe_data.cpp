#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>

//cpp

void TicTacToeData::save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (auto& game : games) 
	{
		for (auto peg : game->get_pegs())
		{
			file_out << peg;
		}
		file_out<<game->get_winner();
		file_out << "\n";
	}

	file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{

	std::vector<std::unique_ptr<TicTacToe>> boards;
	std::ifstream read_file(file_name);

	while (read_file.is_open())
	{

		std::vector<std::string> pegs;
		std::string line;

		while (getline(read_file, line)) 
		{
			for (int ch = 0; ch < line.size() - 1; ch++) 
			{
				std::string chstring(1, line[ch]);
				pegs.push_back(chstring);
			}
			std::string winner = std::string(1, line.back());
			std::unique_ptr<TicTacToe> board;

			if (pegs.size() == 9)
			{
				board = std::make_unique<TicTacToe3>(pegs, winner);
			}
			else if (pegs.size() == 16)
			{
				board = std::make_unique<TicTacToe4>(pegs, winner);
			}

			boards.push_back(std::move(board));
		}
		read_file.close();
	}
	return boards;
}
