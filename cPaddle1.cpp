#include "pch.h"
#include "cPaddle1.h" 


cPaddle1::cPaddle1()
{
	origionalX = 5;
	origionalY = random(1, 25);
	pX = 5;
	pY = random(1, 25);
}


cPaddle1::~cPaddle1()
{
}

int cPaddle1 :: random(int min, int max)
{
	srand((int)time(0));
	int tmp = min + rand() % (max + 1 - min);
	return tmp;
}

void cPaddle1 ::createPaddle()
{
	for (int i = 0;i < 7;i++)
	{
		move::gotoxy(pX, pY + i);
		cout << KiHieu;
	}

}
