#include "pch.h"
#include "GameEngine.h"
#include <iostream>
#include <conio.h>
#include <tchar.h>
#include <time.h>
#ifdef UNICODE
#define out  std::wcout
#else
#define out std::cout
#endif

#define end std::endl

#define xstr(s) str(s)
#define str(s) #s

void sleep(unsigned int mseconds)
{
	clock_t goal = mseconds + clock();
	while (goal > clock());
}

GameEngine::MenuChoice GameEngine::menuChoice;

GameEngine::GameEngine(): mp_playerData(nullptr)
{
}


GameEngine::~GameEngine()
{
}

void GameEngine::MainMenu()
{
	system ("cls");
	out << _T("Press: ")<< KEY0 << _T(" -> ") << _T("New Game") << std::endl;
	out << _T("Press: ")<< KEY1 << _T(" -> ") << _T("Rank") << std::endl;
	out << _T("Press: ")<< KEY2 << _T(" -> ") << _T("Credits") << std::endl;
	out << _T("Press: ")<< KEY3 << _T(" -> ") << _T("Quit") << std::endl;
}

bool GameEngine::MainInput()
{
	// good ? I pressed a character key... some lik y u presse 0
	menuChoice = static_cast<MenuChoice>(_getch());

switch (menuChoice)
{
	case MenuChoice::NewGame: // wew hum
		{
			
		}break;

	case MenuChoice::Credits:
		{
			
		}break;

	case MenuChoice::Rank:
		{
			
		}break;
	case MenuChoice::Quit:
		{

		}break;
	default:
	{
		out<< " invalid input try again"  << end;
		sleep(500);
		system("cls");
		return false;
	}break;
}


}



