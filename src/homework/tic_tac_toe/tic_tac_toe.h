//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


using std::string;
using std::cout;
class TicTacToe
{
public:
	TicTacToe(int size) : pegs{ size*size, " " } {};
	bool game_over();
	void mark_board(int position);
	void start_game(string first_player);
	string get_player() const { return next_player; }
	string get_winner() { return winner; }
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& game); 
	friend std::istream& operator >> (std::istream& in, TicTacToe& game); 
protected:
	std::vector<string> pegs;
	string winner;
	string next_player;
	virtual bool check_row_win() { return false; }
	virtual bool check_column_win() { return false; }
	virtual bool check_diagonal_win() { return false; }
private:
	bool check_board_full();
	void set_next_player();
	void clear_board();
	void set_winner();
};

class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message() const { return message; }
private:
	string message;
};


#endif // !TIC_TAC_TOE_H