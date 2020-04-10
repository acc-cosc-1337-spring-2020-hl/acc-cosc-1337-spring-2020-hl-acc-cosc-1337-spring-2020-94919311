//h
#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::cout;
class TicTacToe
{
public:
	bool game_over();
	void mark_board(int position);
	void display_board(); // doesn't appear on the UML Diagram but later is says to use it
	void start_game(string first_player);
	string get_player() const { return next_player; }
	string get_winner() { return winner; }
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& game); // ?
	friend std::istream& operator >> (std::istream& in, TicTacToe& game); // ?
protected:
	std::vector<string> pegs{ 9, " " };
	string winner;
	string next_player;
private:
	bool check_board_full();
	void set_next_player();
	void clear_board();
	void set_winner();
	bool check_row_win();
	bool check_column_win();
	bool check_diagonal_win();
};

class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message() const { return message; }
private:
	string message;
};


