//h

#include "tic_tac_toe.h"
#include <memory>
#include<string>

class TicTacToeManager 
{
public:
	void save_game(std::unique_ptr<TicTacToe>& b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager); 
	void get_winner_totals(int& x, int& o, int& t);
protected:
	int o_win{ 0 };
	int x_win{ 0 };
	int tie{ 0 };
	std::vector <std::unique_ptr<TicTacToe>> games; 
private:
	void update_winner_count(std::string);

};