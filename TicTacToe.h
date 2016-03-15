#pragma once
class TicTacToe
{
private:
	int game[3][3];
public:
	TicTacToe();
	~TicTacToe();
	void reset();
	bool move(int row,int col,int play);
	void print();
	string over();
};

