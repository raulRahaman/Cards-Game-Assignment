#pragma once
#include "Headers.h"
class Cards {
	
public:
	
const static int TYPES_OF_CARD = 14;

const string deck[TYPES_OF_CARD]{ "1+","2+","3+","4+","5+","6+","7+","1-","2-","3-","4-","7-" , "10+","Steal" };

void cardPoints();

void showPlayerScore();

};