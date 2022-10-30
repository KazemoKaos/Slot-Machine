//============================================================================
// Name        : SlotMachine.hpp
// Author      : Tyler Nguyen
// Version     : 10/15/20
// Description : Program 2
//============================================================================

#ifndef SlotMachine_hpp
#define SlotMachine_hpp
#include "Reel.hpp"
using namespace std;

class SlotMachine
{
private:
	Reel* reel1; 
	Reel* reel2;
	Reel* reel3;
public:
	SlotMachine();
	~SlotMachine();
	void spin();
	int payout();
	char getReel1prev();
	char getReel1();
	char getReel1next();
	char getReel2prev();
	char getReel2();
	char getReel2next();
	char getReel3prev();
	char getReel3();
	char getReel3next();
};

#endif /* SlotMachine_hpp */