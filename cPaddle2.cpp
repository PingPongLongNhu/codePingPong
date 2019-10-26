#include "pch.h"
#include "cPaddle2.h"

//tao vi tri xuat hien ban dau cua thanh ngang ben phai
cPaddle2::cPaddle2()
{
	
	pX = 109;
	pY = random(2, 18);
}


cPaddle2::~cPaddle2()
{
}
// tao ra gia tri ngau nhien cho toa do
int cPaddle2::random(int min, int max)
{
	int tmp = min + rand() % (max + 1 - min);
	return tmp;
}
// in ra thanh ngang ben phai
void cPaddle2::createPaddle()
{
	for (int i = 0;i < 7;i++)
	{
		move::gotoxy(pX, pY + i);
		cout << KiHieu;
	}

}


void cPaddle2 :: Paddle_move(char direction)
{
	int check = 0;
	// 0 khi pY dang o vi tri bien tren
	// 1 khi pY dang o vi tri bien duoi

	if (direction == 72)
	{
		pDirection = 2;
	}
	else 
	{
		pDirection = 1;
	}
	
	// 1 la di xuong
	// 2 la di len


		if (pDirection == 1 && pY <=18)
		{
			move::gotoxy(pX, pY);// di chuyen con tro den vi tri truoc do cua X va y
			printf(" ");// su dung ky thua backspace

			pY++;// dich chuyen thanh xuong mot don vi toa do

			createPaddle();
		}
		else if (pDirection == 2 && pY >= 3)
		{
			move::gotoxy(pX, pY + 6);// cho con toa do di chuyen den vi tri cuoi cung cua thanh 
			printf(" ");
			pY--;// dich chuyen thanh len mot don vi toa do
			createPaddle();

		}
}


int cPaddle2::getpX()
{
	return pX;
}


int cPaddle2::getpY()
{
	return pY;
}


int cPaddle2::getLength()
{
	return length;
}