#pragma once
#include "cPaddle1.h"
#include "cPaddle2.h"
#include "window.h"
// lop bong
class cBall
{
protected:
	int bX;// vi tri cua X hien tai
	int bY;// vi tri cua Y hien tai
	int direction; // huong di chuyen cua bong
	const char KiHieu = 219;// ma ASCII cua bong
	const int orginalSpeed = 100;
	/*  return 1: go left
		return 2: go right
		return 3: go upleft
		return 4: go downleft
		return 5: go upright
		return 6: go downright
	*/
	int speed;
public:
	cBall();
	~cBall();
	int random(int, int);// tao gia tri ngau nhien
	void setX(int);// thiet lap gia tri cho X
	void setY(int); // thiet lap gia tri cho Y
	void resetSpeed(); // reset lai toc do
	int getX();// lay gia tri cua X
	int getY();// lay gia tri cua Y
	int getDirection();// lay huong di chuyen
	void createBall();// ve bong
	void moveBall(); // chuyen dong theo huong cheo "/"
	bool checkCollision(window screen, cPaddle1 p1, cPaddle2 p2);
	//return false neu paddle khong bat duoc ball
	void init();
	void clearBeforeBall();
	int getSpeed();
};


