#include "pch.h"
#include "window.h"


window::window()
{
}


window::~window()
{
}

void window :: resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void window :: drawPlayWindow()
{
	resizeConsole(850, 650);
	char c;
	gotoxy(X0, Y0);
	c = 201;
	cout << c;
	c = 205;
	//In thanh ngang tren
	for (int i = 0; i < WIDTH - 1; i++)
	{
		cout << c;
	}
	c = 187;
	cout << c;
	c = 186;

	//In thanh doc ben trai
	for (int i = 0; i < HEIGHT - 1; i++)
	{
		gotoxy(X0, Y0 + i + 1);
		cout << c << endl;
	}
	gotoxy(X0, Y0 + HEIGHT);
	c = 200;
	cout << c;

	//In thanh ngang duoi
	gotoxy(X0 + 1, Y0 + HEIGHT);
	c = 205;
	for (int i = 0; i < WIDTH - 1; i++)
	{
		cout << c;
	}
	c = 188;
	cout << c;
	
	//In thanh doc ben phai
	c = 186;
	for (int i = 0; i < HEIGHT - 1; i++)
	{
		gotoxy(X0 + WIDTH, Y0 + i + 1);
		cout << c << endl;
	}

	//Tao khung du lieu tro choi
	gotoxy(X0 + 1, Y0 + 25);
	c = 205;
	for (int i = 0; i < WIDTH - 1; i++)
	{
		cout << c;
	}
	//player 1
	int k = 26;
	gotoxy(X0 + 5, Y0 + k);
	cout << " ___ _                     _ " << endl; gotoxy(X0 + 5, Y0 + k + 1);
	cout << "| _ \\ |__ _ _  _ ___ _ _  / |" << endl; gotoxy(X0 + 5, Y0 + k + 2);
	cout << "|  _/ / _` | || / -_) '_| | |" << endl; gotoxy(X0 + 5, Y0 + k + 3);
	cout << "|_| |_\\__,_|\\_, \\___|_|   |_|" << endl; gotoxy(X0 + 5, Y0 + k + 4);
	cout << "            |__/             " << endl;
	//player 2
	gotoxy(X0 + 68, Y0 + k);
	cout << " ___ _                     ___ " << endl; gotoxy(X0 + 68, Y0 + k + 1);
	cout << "| _ \\ |__ _ _  _ ___ _ _  |_  )" << endl; gotoxy(X0 + 68, Y0 + k + 2);
	cout << "|  _/ / _` | || / -_) '_|  / / " << endl; gotoxy(X0 + 68, Y0 + k + 3);
	cout << "|_| |_\\__,_|\\_, \\___|_|   /___|" << endl; gotoxy(X0 + 68, Y0 + k + 4);
	cout << "            |__/ " << endl;

	//Score
	gotoxy(X0 + 10, Y0 + 32);
	cout << "SCORE: ";
	gotoxy(X0 + 75, Y0 + 32);
	cout << "SCORE: ";

	gotoxy(X0 + 41, Y0 + 30);
	c = 220;
	for (int i = 0; i < 20; i++)
	{
		cout << c;
	}


}