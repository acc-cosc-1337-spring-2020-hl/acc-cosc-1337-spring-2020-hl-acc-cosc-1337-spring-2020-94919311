//h
#include <vector>
#include "tic_tac_toe.h"
#include<memory>
#include<fstream>
#include<string>


#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData {

public: 
	void save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
private:
	const std::string file_name{ "tictactoe.dat" };
};

#endif // !TIC_TAC_TOE_DATA_H