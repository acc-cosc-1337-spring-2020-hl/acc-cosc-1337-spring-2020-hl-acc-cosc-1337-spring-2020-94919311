#include "tic_tac_toe.h"


class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3(): TicTacToe(3) {};
private:
	bool check_colunm_win();
	bool check_row_win();
	bool check_diagonal_win();
};