#include "pch.h"
#include "cPaddle2.h"


cPaddle2::cPaddle2()
{
	origionalX = 100;
	origionalY = random(1, 25);
	pX = 100;
	pY = random(1, 25);
}


cPaddle2::~cPaddle2()
{
}

int cPaddle2::random(int min, int max)
{
	int tmp = min + rand() % (max + 1 - min);
	return tmp;
}

void cPaddle2::createPaddle()
{
	for (int i = 0;i < 7;i++)
	{
		move::gotoxy(pX, pY + i);
		cout << KiHieu;
	}

}

