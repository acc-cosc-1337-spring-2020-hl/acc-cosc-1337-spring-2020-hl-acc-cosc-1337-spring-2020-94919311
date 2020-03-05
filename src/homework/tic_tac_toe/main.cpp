#include "tic_tac_toe.h"


using std::cout;
using std::cin;
using std::string;

int main() 
{
	string first_player;
	TicTacToe game;
	cout << "Please choose one: 'X' or 'O'\n";
	cin >> first_player;

	try {
		game.start_game(first_player);
	}
	catch (Error e){

		cout << e.get_message();
	}

	int option;
	int position;
	while (option == 1) {
		cout << "Please enter a position\n";
		cin >> position;
		try {
			game.mark_board(position);
		}
		catch (Error e) {
			cout << e.get_message();
		}
		cout << "Enter '1' to continue with the game or '2' to finish.\n";
	}
	return 0;
}