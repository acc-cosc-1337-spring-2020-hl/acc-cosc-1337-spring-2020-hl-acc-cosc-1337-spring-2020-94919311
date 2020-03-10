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
	void start_game(string first_player);
	string get_player() const { return player; }
	void display_board() const;
private:
	bool check_board_full();
	void set_next_player();
	string player;
	std::vector<string> pegs{ 9, " " };
	void clear_board();
};

class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message() const { return message; }
private:
	string message;
};