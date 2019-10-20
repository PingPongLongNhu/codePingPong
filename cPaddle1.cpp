#include "pch.h"
#include "cPaddle1.h" 

// tao vi tri xuat hien ban dau cho thanh ngang ben phai
cPaddle1::cPaddle1()
{
	origionalX = 5;
	origionalY = random(2, 18);
	pX = 5;
	pY = random(2, 18);
}


cPaddle1::~cPaddle1()
{
}


// tao ra gia tri ngau nhien cho toa do
int cPaddle1 :: random(int min, int max)
{
	srand((int)time(0));
	int tmp = min + rand() % (max + 1 - min);
	return tmp;
}


// in thanh ngang ben phai
void cPaddle1 ::createPaddle()
{
	for (int i = 0;i < 7;i++)
	{
		move::gotoxy(pX, pY + i);
		cout << KiHieu;
	}
}


void cPaddle1::Paddle_move()
{
	int check = 0;
	// 0 khi pY dang o vi tri bien tren
	// 1 khi pY dang o vi tri bien duoi

	pDirection = down;
	// 1 la di xong
	// 2 la di len


	for (int i = 0;i < 50;i++)
	{
		origionalX = pX;
		origionalY = pY;


		if (pDirection == 1 && pY <= 18)
		{
			move::gotoxy(origionalX, origionalY);// di chuyen con tro den vi tri truoc do cua X va y
			printf(" ");// su dung ky thua backspace

			pY++;// dich chuyen thanh xuong mot don vi toa do
			origionalX = pX;
			origionalY = pY;// luu tru toa do hien co de thuc hien thao tac backspace
			createPaddle();
		}
		else if (pDirection == 2 && pY >= 3)
		{
			move::gotoxy(origionalX, origionalY + 6);// cho con toa do di chuyen den vi tri cuoi cung cua thanh 
			printf(" ");
			pY--;// dich chuyen thanh len mot don vi toa do
			createPaddle();
			origionalX = pX;
			origionalY = pY;// luu tru toa do de thuc hien thao tac backspace
		}


		Sleep(1000);

	}
}


