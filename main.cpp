#include <iostream>
#include <vector>
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
	std::vector<int> IntArray;

	cout << Add<float>(10.5f, 20.1f) << endl;
	cout << Add<int>(10, 20) << endl;
	cout << Add<char>(10, 20) << endl;
	cout << Add<double>(10, 20) << endl;

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