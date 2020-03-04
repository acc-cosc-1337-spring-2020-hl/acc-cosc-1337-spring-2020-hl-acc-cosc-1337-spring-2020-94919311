#include "tic_tac_toe.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	
	TicTacToe game;
	cout << "Please choose one: 'X' or 'O'\n";
	cin >> first_player;

	try {
		game.start_game(first_player);
	}
	catch (Error e){

		cout << e.get_message();
	}
	return 0;
}