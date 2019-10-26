#pragma once
// lop ve man hinh
#include "cPaddle1.h"
#include "cPaddle2.h"
#include "cBall.h"
class window
{
	int X0 = 2;
	int Y0 = 1;
	int WIDTH =110;
	int HEIGHT =35;
	cPaddle1 p1;
	cPaddle2 p2;
public:
	
	void drawPlayWindow();
	void resizeConsole(int width, int height);
	void gotoxy(int x, int y);
	int getY0();
	int getX0();
	int getWIDTH();
	int getHEIGHT();
	void playGame();
	
};

