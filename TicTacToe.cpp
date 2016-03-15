#include "TicTacToe.h"
#include <iostream>

using namespace std;

//Default Constructor and Destructor
TicTacToe::TicTacToe()
{
	reset();
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
	cout << endl << " -----"<<endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "|";
		for (int j = 0; j < 3; j++)
		{
			cout<<game[i][j]<<"|";
		}//End
		cout << endl <<" -----"<< endl ;
	}//End
}

int TicTacToe::over()
{
	int c1=0, c2=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j]==1)
			{
				c2 = 0;
				c1++;
				if (c1 == 3)
					return 1;
			}

			else if (game[i][j] == 2)
			{
				c1 = 0;
				c2++;
				if (c2 == 3)
					return 2;
			}

			else
			{
				return 0;
			}
		}//End
	}//End
}