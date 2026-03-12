#include <iostream>
#include "Engine.h"

using namespace std;

struct Color
{
	int R;
	int G;
	int B;
	int A;
};

int main()
{
	cout << sizeof(Color);

	Color PlayerColor;
	PlayerColor.R = 255;
	PlayerColor.G = 255;
	PlayerColor.B = 255;


	return 0;
	bool bIsRunning = true;

	//Gameloop
	while (bIsRunning) //frame
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Render();
	}

	return 0;
}