#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

int main() 
{
	string xo;
	string replay = "y";
	TicTacToe game;
	int position;

	while(replay == "y" || replay == "Y")
	{
		cout << "Please select 'X' or 'O' to begin game! \n";
		cin >> xo;
		
		while(!(xo == "X" || xo == "O"))
		{
			cout << "Please select 'X' or 'O' to begin game! Case sensitive \n";
			cin >> xo;
		}
		game.start_game(xo);
		while(game.game_over() == false)
		{ 
			cout << "It is "<< game.get_player()<< "'s turn. Please pick a space from 1 to 9.\n";
			cin >> position;
			game.mark_board(position);
			game.display_board();
			cout << "\n";
		}
		if(game.get_winner() == "C")
		{
			cout << "Good game! It's a cat's game! \n";
		}
		else
		{
			cout << "Good game! " << game.get_winner() << " has won. \n";
			cout << "Would you like to play another game? Press 'y' for yes. \n";
			cin >> replay;
		}
	}
			return 0;
} 