// PRSGame070519.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "GameEngine.h"

int main()
{
    std::cout << "Hello World!\n";

	GameEngine obj;

	
	do 
	{
		obj.MainMenu();
		obj.MainInput();
	} while (true);


// 	delete obj;
// 	obj = nullptr;
}

