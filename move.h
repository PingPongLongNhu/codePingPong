#pragma once
class move
{
public:
	move();
	~move();
	static void gotoxy(int x, int y)
	{
		static HANDLE h = NULL;
		if (!h)
			h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD c = { x, y };
		SetConsoleCursorPosition(h, c);
	}
	friend class cPaddle;
	friend class cBall;

};

