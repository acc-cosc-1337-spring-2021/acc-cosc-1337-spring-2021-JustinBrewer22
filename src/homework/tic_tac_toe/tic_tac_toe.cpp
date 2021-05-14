//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<vector>
using namespace std;

bool TicTacToe::game_over()
{
    // Homework 7:
    if(check_column_win() || check_row_win() || check_diagonal_win() && !check_board_full())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else if(!check_board_full())
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    if(first_player == "X" || first_player == "O")
    {
        player = first_player;
        clear_board();
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    for (int i = 0; i <= 8; i = i + 1)
    {
        cout << pegs[i];

        if ((i+1) % 3 == 0)
        {
            cout << "\n";
        }
        else
        {
            cout << " | ";
        }
    }
}
// Homework 7:
bool TicTacToe::check_column_win()
{
    bool win = false;
    for(int i = 0; i <= 2; i = i + 1)
    {   
        if(pegs[i] == pegs[3+i] && pegs[i] == pegs[6+i])
        {
            win = true;
        }
    }
    return win;
}
// Homework 7:
bool TicTacToe::check_row_win()
{
    bool win = false;
    for(int i = 0; i <= 2; i = i + 1)
    {
        if(pegs[3*i] == pegs[1+(3*i)] && pegs[3*i] == pegs[2+(3*i)])
        {
            win = true;
        }
    }
    return win;
}
// Homework 7:
bool TicTacToe::check_diagonal_win()
{
    bool win = false;
    for(int i = 0; i <= 1; i++)
    {
        if(pegs[4] == pegs[2*i] && pegs[4] == pegs[8-(2*i)])
        {
            win = true;
        }
    }
    return win;
}
// Homework 7:
void TicTacToe::set_winner()
{
    if(player == "X")
        winner == "O";
    else
        player = "X";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

bool TicTacToe::check_board_full()
{
    bool full = true;

    for(int i = 0; i <= 8; i = i + 1)
    {
        if(pegs[i] == " ")
            full = false;
    }
    return full;
} 

void TicTacToe::clear_board()
{
    for(int i = 0; i <= 8; i = i + 1)
    {
        pegs[i] = " ";
    }
}