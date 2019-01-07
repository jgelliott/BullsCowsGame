//library
#include <iostream>
#include <string>
//using namespace std;(only when one or few namespaces)


void PrintIntro();
void PlayGame();
std::string guess();
bool PlayAgain();





int main() 
{
	do
	{
		PrintIntro();
		PlayGame();
	} 
	while (PlayAgain() == 1);
	
	return 0;
}






//functions
//print introduction
void PrintIntro()
{
	constexpr int WordLength = 9;
	std:: cout << "Welcome to Bulls and Cows, a fun word game.\n" << std::endl;
	std::cout << "Can you guess the " << WordLength << " letter isogram I'm thinking of?\n" << std::endl;
}
//get guess print back
std::string guess()
{
	std::string guess = "";

	//get guess
	std::cout << "Please Enter Your Guess\n" << std::endl;
	std::getline(std::cin, guess);
	return guess;
}
void PlayGame()
{
	constexpr int numturns = 5;
	for (int count = 1; count <= numturns; count++)
	{
		std::string getguess = guess();
		std::cout << "You Entered " << getguess << std::endl;
		std::cout << "\n";
	}
}
bool PlayAgain() 
{
	std::cout << "Do you want to play again?(y/n)";
	std::string response = "";
	std::getline(std::cin, response);
	return (response[0] == 'y') || (response[0] == 'Y');
}
