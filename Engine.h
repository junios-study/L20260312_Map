#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__  

extern int Map[10][10];

extern int PlayerX;
extern int PlayerY;

/// <summary>
/// public class
/// </summary>
struct Position2
{
	int X;
	int Y;

	void AddPlayerOffset(int DeltaX, int DeltaY)
	{

	}
};

class Position
{
public:
	int X;
	int Y;

	void AddPlayerOffset(int DeltaX, int DeltaY)
	{

	}

};
//C++

extern Position PlayerPosition;

int Input();

void Tick(int KeyCode);

void Render();

void Gotoxy(int x, int y);

void Clear();

void AddPlayerOffset(int DeltaX, int DeltaY);


#endif //__ENGINE_H__