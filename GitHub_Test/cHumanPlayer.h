/*
=================
cHumanPlayer.h
- Header file for class definition - SPECIFICATION
- Header file for the Human Player class
=================
*/
#ifndef _CHPLAYER_H
#define _CHPLAYER_H
#include "cHand.h"
#include "cPlayer.h"

class cHumanPlayer : public cPlayer
{
public:
	cHumanPlayer(const std::string& name);   // Constructor - will create an instance of the cHumanPlayer class.
	virtual bool pIsTwisting();  // Indicates if the player wants to take another card.

};
#endif