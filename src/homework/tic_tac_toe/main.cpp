#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include<functional>
#include<memory>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int option = 1;
	int position;
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>(); 
	std::vector < std::reference_wrapper<TicTacToe>> games;

	while (option == 1)
	{
		int type = 0;
		cout << "Do you want to play tictactoe 3 or 4? " << "\n";
		cin >> type;
		string first_player;
		if (type = 3)
		{
			std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3>();
			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					board->start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!board->game_over())
			{
				
				try {
					cin >> board->mark_board(); // don't remember what should be here
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << board->get(); // same here
			}

			manager->save_game(board);
			cout << "\nThe winner is: " << board->get_winner() << "\n";
		}
		else
		{
			std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4>();

			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					board->start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!board->game_over())
			{
				try {
					cin >> board->; // same here
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << game.get(); // same here
			}

			manager->save_game(board);
			cout << "\nThe winner is: " << board->get_winner() << "\n";
		}
		
		cout << "Enter '1' to continue with the game or '2' to finish.\n";
		cin >> option;
	}

	cout << manager<<"\n\n";
	int x, o, t;
	manager->get_winner_totals(x, o, t);
	cout << "Winners: \n";
	cout << "X" << x <<"\n";
	cout << "O" << o << "\n";
	cout << "T" << t << "\n";

	return 0;
}