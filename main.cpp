#include <iostream>
#include "Engine.h"


using namespace std;



//overloading, ¿Á¡§¿«
//int Add(int A, int B)
//{
//	return A + B;
//}
//
//float Add(float A, float B)
//{
//	return A + B;
//}
//
//double Add(double A, double B)
//{
//	return A + B;
//}


int main()
{
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