#pragma once
// lop thanh ngang ben phai
class cPaddle2 
{
#define down 1;
#define up 2;
	int pX;
	int pY;
	int origionalX;// toa do truoc do cua X va Y
	int origionalY;
	const char KiHieu = 178;
	int pDirection; // huong di chuyen
public:
	cPaddle2();
	~cPaddle2();
	int random(int min, int max);
	void createPaddle();
	void Paddle_move();
};

