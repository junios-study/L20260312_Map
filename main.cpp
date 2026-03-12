#include <iostream>
#include "Engine.h"

using namespace std;

struct InnerType
{
	int A;
	int B;
};

struct CustomDataType
{
	int A;
	int B;
	float C;
	bool D;
	InnerType Inner;
};

class AActor
{
public:

	int X;
	int Y;

	void Add()
	{

	}

	void Move()
	{
		this->Add();
	}
};
//Computer 졸라 빨라 -> 현질(비용 down)
//사물(OOP) 단위 빠를까? 절차 만드는게 빠를까? 실행 속도 기준(c, asm)
//사물 -> 데이터 (데이터 모델링)
/// <summary>
/// OOP
/// </summary>
/// <returns></returns>
/// 

class Engine
{
public:
	void Init();
	void Run();

};

int main()
{
	CustomDataType Data;
	CustomDataType* P = &Data;
	Data.A = 1;
	std::cout << (*P).A;
	std::cout << P->A;

	AActor* Player = nullptr;

	Player = new AActor();


	Player->Move();

	delete Player;
	Player = nullptr;


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