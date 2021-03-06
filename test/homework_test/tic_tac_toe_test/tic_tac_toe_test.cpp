#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToe")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(3);
	test.mark_board(4);
	test.mark_board(5);
	test.mark_board(7);
	test.mark_board(6);
	test.mark_board(9);
	test.mark_board(8);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "C");
}
// Homework 7:
TEST_CASE("Test first player set to X")
{
	TicTacToe test;
	test.start_game("X");
	
	REQUIRE(test.get_player() == "X");
}
TEST_CASE("Test first player set to O")
{
	TicTacToe test;
	test.start_game("O");
	
	REQUIRE(test.get_player() == "O");
}
TEST_CASE("Test win by first column")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(4);
	test.mark_board(5);
	test.mark_board(7);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win by second column")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(2);
	test.mark_board(3);
	test.mark_board(5);
	test.mark_board(6);
	test.mark_board(8);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win by third column")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(3);
	test.mark_board(4);
	test.mark_board(6);
	test.mark_board(7);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win by first row")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(1);
	test.mark_board(4);
	test.mark_board(2);
	test.mark_board(5);
	test.mark_board(3);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win by second row")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(4);
	test.mark_board(1);
	test.mark_board(5);
	test.mark_board(2);
	test.mark_board(6);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win by third row")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(7);
	test.mark_board(2);
	test.mark_board(8);
	test.mark_board(5);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win diagnonally from top left")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(5);
	test.mark_board(3);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
}
TEST_CASE("Test win diagnonally from top right")
{
	TicTacToe test;
	test.start_game("X");
	test.mark_board(7);
	test.mark_board(2);
	test.mark_board(5);
	test.mark_board(1);
	test.mark_board(3);

	REQUIRE(test.game_over() == true);
}