//h

#include "tic_tac_toe.h"
#include <functional>

class TicTacToeManager : public TicTacToe
{
public:
	void save_game(TicTacToe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager); 
	void get_winner_totals(int& x, int& o, int& t);
protected:
	int o_win{ 0 };
	int x_win{ 0 };
	int tie{ 0 };
	std::vector <std::reference_wrapper<TicTacToe>> games; 
private:
	void update_winner_count(string);

};