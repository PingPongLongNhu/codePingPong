#pragma once
class cPaddle1 
{
	int pX;
	int pY;
	int origionalX;
	int origionalY;
	const char KiHieu = 178;
public:
	
	cPaddle1();
	~cPaddle1();
	int random(int min, int max);
	void createPaddle();
};

