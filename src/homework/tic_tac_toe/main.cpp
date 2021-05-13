#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

int main() 
{
	string xo;
	TicTacToe game;
	int position;

	cout << "Please select 'X' or 'O' to begin game! \n";
	cin >> xo;
	game.start_game(xo);

	while(game.game_over() == false)
	{
		cout << "It is "<< game.get_player()<< "'s turn. Please pick a space from 1 to 9.\n";
		cin >> position;
		game.mark_board(position);
		game.display_board();
		cout << "\n";
	}
	cout<<"Game over!";
	return 0;
} 