#pragma once
class cPaddle2 
{
	int pX;
	int pY;
	int origionalX;
	int origionalY;
	const char KiHieu = 178;
public:
	cPaddle2();
	~cPaddle2();
	int random(int min, int max);
	void createPaddle();
};

