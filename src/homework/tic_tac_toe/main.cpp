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
	std::unique_ptr<TicTacToe> board;

	while (option == 1)
	{
		int type = 0;
		cout << "Do you want to play tictactoe 3 or 4? " << "\n";
		cin >> type;
		string first_player;
		if (type = 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else 
		{
			board = std::make_unique<TicTacToe4>();
		}
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
				cin >> *board; 
			}
			catch (Error e) {
				cout << e.get_message();
			}
			cout << *board; 
		}

		cout << "\nThe winner is: " << board->get_winner() << "\n";
		manager->save_game(board);
		
		cout << "Play again?";
		cin >> option;
	}

	cout << *manager<<"\n\n";
	int x, o, t;
	manager->get_winner_totals(x, o, t);
	cout << "Winners: \n";
	cout << "X" << x <<"\n";
	cout << "O" << o << "\n";
	cout << "T" << t << "\n";

	TicTacToeData data;
	TicTacToeManager(data);

	return 0;
}