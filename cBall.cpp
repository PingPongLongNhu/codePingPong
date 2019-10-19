#include "pch.h"
#include "cBall.h"


cBall::cBall()
{
	origionalX = random(40, 50);
	origionalY = random(10, 20);
	bX= random(40, 50);
	bY = random(10, 20);
}


cBall::~cBall()
{
}


int cBall :: random(int min, int max)
{
	srand((int)time(0));
	return min + rand() % (max + 1 - min);
}


void cBall::setX(int x)
{
	bX = x;
}


void cBall::setY(int y)
{
	bY = y;
}


int cBall::getX()
{
	return bX;
}


int cBall::getY()
{
	return bY;
}


int cBall::getDirection()
{
	return direction;
}


void cBall :: createBall()
{
	move::gotoxy(bX - 1, bY);
	cout << char(KiHieu);
	move::gotoxy(bX, bY);
	cout << char(KiHieu);
}