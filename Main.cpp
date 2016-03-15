#include "TicTacToe.h"
#include<iostream>

using namespace std;

//Main method
int main()
{
	TicTacToe obj;
	int decis=1;
	int row, col;
		while (decis != 0)
		{
			cout << "Enter a choice:" << endl << "1-Play" << endl << "2-Over" << endl << "3-Reset" << endl;
			cin >> decis;
			switch (decis)
			{
			case 1: 
				obj.print();
				cout << "P1 enter row" << endl;
				cin >> row;
				cout << "P1 enter column" << endl;
				cin >> col;
				obj.move(row, col, 1);

				obj.print();
				cout << "P2 enter row" << endl;
				cin >> row;
				cout << "P2 enter column" << endl;
				cin >> col;
				obj.move(row, col, 2);
			
			case 2:
				cout << "Winner is: " << "obj.over()" << endl;

			case 3:
				obj.reset();
				obj.print();
			}
		}
	return 1;
}