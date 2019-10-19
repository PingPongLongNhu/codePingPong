#pragma once
class cBall
{
protected:
	int bX;
	int bY;
	int origionalX;
	int origionalY;
	int direction;
	const char KiHieu = 219;
public:
	cBall();
	~cBall();
	int random(int, int);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	int getDirection();
	void createBall();
};

