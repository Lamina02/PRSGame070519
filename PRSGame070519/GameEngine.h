#pragma once
#include <string>


// 1 file or more ?

// hmmmmm seclecting beten global enum and class enums difference? scope acess , class enum lol scope limited to class instance , gobal its gobal xd yeah but global is bad it was told to me

	struct PlayerData 
	{
		std::string PlayerName[3] = { 0, };
		short PlayerWins[3] = {0, };
	};


class GameEngine
{
private:
	static enum class MenuChoice : char
	{
		NewGame,
		Rank,
		Credits,
		Quit
	}menuChoice;
private:
	static enum class GameObj : char
	{
		Scissor,
		Paper,
		Rock,
		Lizard,
		Spock
	}gameObj;
private: // just for clearance
	static enum class GameWinner : char
	{
		Player1,
		Player2,
		Ai
	}gameWinner;
private:
	/*PlayerData mv_playerData;*/
	PlayerData* mp_playerData;
private:
	static enum //other enum , menukeys smooking making
	{
		KEY0,
		KEY1,
		KEY2,
		KEY3,
		KEY4,
		KEY5
		//....
	}MenuKeys;
public:
	GameEngine();
	~GameEngine();

	void MainMenu();
	bool MainInput();
protected:
 // i thinking i need enum that menu soo i can retrun the correct enum from that menu , got it ? Yes good idea
	void StartMenu();
	void Start();
	void StartInput();
	void ShowRank();
	void ShowStatus();

	void Compute();
private:

};



