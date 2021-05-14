//h
#include <iostream>
#include <vector>
using namespace std;

class TicTacToe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const;
        void display_board()const;
        // Homework 7:
        string get_winner(){return winner;}

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        // Homework 7:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();

        string player;
        vector <string> pegs = {9," "};
        // Homework 7:
        string winner; 
};