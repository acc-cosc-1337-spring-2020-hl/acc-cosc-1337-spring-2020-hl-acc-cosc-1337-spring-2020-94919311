#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


// Tests are failing and I don't know why

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can�t call mark board before start game") {
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O") {
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.start_game("S"), Error);
}

TEST_CASE("Test set first player to X") {
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test set first player to O") {
	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with X game flow") {
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with O game flow") {
	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	game.mark_board(2);
	REQUIRE(game.get_player() == "X");
}


TEST_CASE("Tests the function mark_position that only accpets 1 to 9") {
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	game.mark_board(5);

}

TEST_CASE("Test win by first column", "[X wins first column]")
{ 
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);      
	REQUIRE(board.game_over() == false);
	board.mark_board(2);        
	REQUIRE(board.game_over() == false);
	board.mark_board(4);        
	REQUIRE(board.game_over() == false);
	board.mark_board(5);         
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by diagonal from top left", "[X wins diagonal from top left]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by diagonal from bottom left", "[X wins diagonal from bottom left]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Tests for no winner") {
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first column 4", "[X wins first column]")
{
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(13);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column 4", "[X wins second column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(10);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(14);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column 4", "[X wins third column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(14);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by forth column 4", "[X wins third column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(12);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(16);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row 4", "[X wins first row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(12);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row 4", "[X wins second row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row 4", "[X wins first row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(10);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(12);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by forth row 4", "[X wins second row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(14);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(15);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(16);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by diagonal from top left 4", "[X wins diagonal from top left]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	board.mark_board(11);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(16);
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by diagonal from bottom left 4", "[X wins diagonal from bottom left]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(10);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == true);
}