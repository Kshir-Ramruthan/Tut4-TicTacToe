#include "TicTacToe.h"

//Default Constructor and Destructor
TicTacToe::TicTacToe()
{
}//End

TicTacToe::~TicTacToe()
{
}//End

void TicTacToe::reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			game[i][j] = 0;
		}//End
	}//End
}

bool TicTacToe::move(int row,int col,int play)
{
	if (game[row][col] == 0)
	{
		game[row][col] = play;
		return true;
	}
	return false;
}

void TicTacToe::print()
{

}