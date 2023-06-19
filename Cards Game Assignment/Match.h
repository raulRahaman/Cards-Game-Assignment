#pragma once
#include "Cards.h"
#include "Headers.h"

class Match{
public:
	//Begin game
	void matchStart();
	//Display match rules
	void matchRules();
	//Start the actual game
	void matchPlay();
	//During the game time
	void currentMatch();
};

