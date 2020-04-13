#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int option = 1;
	int position;
	TicTacToeManager manager;

	while (option == 1)
	{
		string first_player;
		TicTacToe game;
		while (!(first_player == "O" || first_player == "X"))
		{
			try {
				cout << "Please choose one: 'X' or 'O'\n";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e) {

				cout << e.get_message();
			}
		}

		while (!game.game_over())
		{
			try {
				cin >> game; // should be cin >> game; ?
			}
			catch (Error e) {
				cout << e.get_message();
			}
			cout << game;
		}

		manager.save_game(game);
		cout << "\nThe winner is: " <<game.get_winner()<< "\n" ;
		cout << "Enter '1' to continue with the game or '2' to finish.\n";
		cin >> option;
	}

	cout << manager<<"\n\n";

	int x, o, t;
	manager.get_winner_totals(x, o, t);
	cout << "Winners: \n";
	cout << "X" << x <<"\n";
	cout << "O" << o << "\n";
	cout << "T" << t << "\n";

	return 0;
}