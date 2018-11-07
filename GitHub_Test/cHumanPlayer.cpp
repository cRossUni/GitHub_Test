/*
=================
cHumanPlayer.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cHumanPlayer.h"
/*
=================
- Data constructor initializes the human player object 
- Is always called, thus ensures all player objects are in a consistent state.
=================
*/

cHumanPlayer::cHumanPlayer(const std::string& name): cPlayer(name) // Constructor - will create an instance of the player class.
{
}
/*
=================
- Check if player wants to twist.
=================
*/
bool cHumanPlayer::pIsTwisting()     // Returns whether the players hand is over 21 therefore "bust".
{
	char response;
	std::cout << cPlayer::getPlayerName() << " do you want to Twist? (Y/N): ";
	std::cin >> response;
	std::cout << "\n";
	return (response == 'y' || response == 'Y');
}
