#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include<functional>


using std::cout;
using std::cin;
using std::string;

int main() 
{
	int option = 1;
	int position;
	TicTacToeManager manager; // I dont't know why I keep gettin an error here
	std::vector < std::reference_wrapper<TicTacToe>> games;

	while (option == 1)
	{
		int type = 0;
		cout << "Do you want to play tictactoe 3 or 4? " << "\n";
		cin >> type;
		string first_player;
		if (type = 3)
		{
			TicTacToe3 game1;
			std::reference_wrapper<TicTacToe> game = game1;
			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					game.get().start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!game.get().game_over())
			{
				try {
					cin >> game.get(); // should be cin >> game; ?
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << game.get();
			}

			manager.save_game(game);
			cout << "\nThe winner is: " << game.get().get_winner() << "\n";
		}
		else
		{
			TicTacToe4 game1;
			std::reference_wrapper<TicTacToe> game = game1;

			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					game.get().start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!game.get().game_over())
			{
				try {
					cin >> game.get(); // should be cin >> game; ?
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << game.get();
			}

			manager.save_game(game);
			cout << "\nThe winner is: " << game.get().get_winner() << "\n";
		}
		
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