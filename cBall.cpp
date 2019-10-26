#include "pch.h"
#include "cBall.h"


cBall::cBall()
{
	bX= random(40, 50);
	bY = random(10, 20);
	direction = 0;
	speed = orginalSpeed;
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
void cBall::moveBall()
{
	switch (direction)
	{
	case 1:  //ball go left
		bX--;
		break;
	case 2:  //ball go right
		bX++;
		break;
	case 3:  //ball go upleft
		bX--;
		bY--;
		break;
	case 4:  //ball go downleft
		bX--;
		bY++;
		break;
	case 5:  //ball go upright
		bX++;
		bY--;
		break;
	case 6:  //ball go downright
		bX++;
		bY++;
		break;
	}
}

bool cBall::checkCollision(window screen, cPaddle1 p1, cPaddle2 p2)
{
	//khong hung duoc ball
	if ((this->bX == screen.getX0() + 3) || (this->bX == screen.getX0() + screen.getWIDTH() - 2))
	{

		return false;
	}
	//ball va cham paddle1 
	else if ((bX == p1.getpX() + 3) && (bY >= p1.getpY() - 2) && (bY <= p1.getpY() + p1.getLength() + 1))
	{
		if (direction == 1)
		{
			direction = 2;
		}
		else if (direction == 4)
		{
			direction = 6;
		}
		else if (direction == 3)
		{
			direction = 5;
		}
		speed = (speed * 90) / 100; //tang toc do len 10%
	}
	//ball va cham paddle2
	else if ((bX == p2.getpX() - 1) && (bY >= p2.getpY() - 2) && (bY <= p2.getpY() + p2.getLength() + 1))
	{
		if (direction == 2)
		{
			direction = 1;
		}
		else if (direction == 6)
		{
			direction = 4;
		}
		else if (direction == 5)
		{
			direction = 3;
		}
		speed = (speed * 90) / 100; //tang toc do len 10%
	}
	//ball va cham top
	else if (bY == screen.getY0() + 1)
	{
		if (direction == 5)
		{
			direction = 6;
		}
		else if (direction == 3)
		{
			direction = 4;
		}
	}
	//ball cham bottom
	else if (bY == screen.getY0() + screen.getHEIGHT() - 11)
	{
		if (direction == 6)
		{
			direction = 5;
		}
		else if (direction == 4)
		{
			direction = 3;
		}
	}
	clearBeforeBall();
	moveBall();
	return true;
}

void cBall::init()
{
	direction = random(3, 6);
	clearBeforeBall();
	bX = random(40, 50);
	bY = random(10, 20);
	createBall();
}

void cBall::clearBeforeBall()
{
	move::gotoxy(bX - 2, bY);
	cout << "  ";
	move::gotoxy(bX, bY);
	cout << " ";
}


int cBall::getSpeed()
{
	return speed;
}


void cBall::resetSpeed()
{
	this->speed = orginalSpeed;
}