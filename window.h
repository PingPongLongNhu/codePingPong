#pragma once
class window
{
	int X0 = 2;
	int Y0 = 1;
	int WIDTH =110;
	int HEIGHT =35;
public:
	void drawPlayWindow();
	void resizeConsole(int width, int height);
	void gotoxy(int x, int y)
	{
		static HANDLE h = NULL;
		if (!h)
			h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD c = { x, y };
		SetConsoleCursorPosition(h, c);
	}
	window();
	~window();
};

