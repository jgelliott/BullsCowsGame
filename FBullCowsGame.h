#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset(); //TODO make rich return value
	int GetMaxTries();//TODO
	int GetCurrentTry();//TODO
	bool IsGameWon();//TODO
	bool CheckGuessValidity(std::string);//TODO


private:
	int MyCurrrentTry;
	int MyMaxTries;
};
