#pragma once
class cPaddle1 
{
#define down 1;
#define up 2;
	int pX;
	int pY;
	const char KiHieu = 178;
	int pDirection;
	int length = 7;
public:
	
	cPaddle1();
	~cPaddle1();
	int random(int min, int max);
	void createPaddle();
	void Paddle_move(char direction);
	int getpX();
	int getpY();
	int getLength();
};

