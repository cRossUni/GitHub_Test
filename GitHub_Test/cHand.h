/*
=================
cHand.h
- Header file for class definition - SPECIFICATION
- Header file for the Hand class
=================
*/
#ifndef _CHAND_H
#define _CHAND_H
#include "cCard.h"

class cHand
{
private:
	std::vector<cCard*> aHand;
	
public:
	cHand();              // Constructor - will create an instance of the card class.
	void addCard(cCard* aCard);      // Adds a card to the current hand.
	void clearHand();     // Clear all the cards from the hand.
	short gethandValue();    // Returns the value of the current hand.
	void showHand();		// Display cards in hand;
	void flipCard();		// flip card face up down.
	bool handIsEmpty();			// Determine if there are any cards in the hand
};
#endif