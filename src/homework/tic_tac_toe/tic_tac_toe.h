//h
#include<iostream>

using std::string;

class TicTacToe
{
public:
	void mark_board(int position);
	void start_game(string first_player);
	string get_player() const { return player; }
private:
	void set_next_player();
	string player;
};

class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message(string message) const { return message; };
private:
	string message;
};