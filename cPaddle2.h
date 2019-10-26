#pragma once
// lop thanh ngang ben phai
class cPaddle2 
{
#define down 1;
#define up 2;
	int pX;
	int pY;
	const char KiHieu = 178;
	int pDirection; // huong di chuyen
	int length = 7;
public:
	cPaddle2();
	~cPaddle2();
	int random(int min, int max);
	void createPaddle();
	void Paddle_move(char direction);
	int getpX();
	int getpY();
	int getLength();
};

