//============================================================================
// Name        : main.cpp
// Author      : Tyler Nguyen
// Version     : 10/15/20
// Description : Program 2
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include "SlotMachine.hpp"
using namespace std;

void displaySlotMachine(int total, int cost, SlotMachine* sm) {
    cout << "----------------" << endl;
    cout << "| Slot Machine |" << endl;
    cout << "----------------" << endl;
    cout << "|  " << sm->getReel1prev();
    cout << "   " << sm->getReel2prev();
    cout << "   " << sm->getReel3prev() << "  |" << endl;
    cout << "|> " << sm->getReel1();
    cout << "   " << sm->getReel2();
    cout << "   " << sm->getReel3() << " <|" << endl;
    cout << "|  " << sm->getReel1next();
    cout << "   " << sm->getReel2next();
    cout << "   " << sm->getReel3next() << "  |" << endl;
    cout << "----------------" << endl;
    cout << "| Spin Cost: " << cost << " |" << endl;
    cout << "| Balance: " << setw(4) << left << total << "|" << endl;
    cout << "----------------" << endl;
}

int main() {
    int total = 100;
    const int cost = 1; 
    SlotMachine* slot = new SlotMachine();
    slot->spin();
    displaySlotMachine(total, cost, slot);

    int option = 0;
    while (option != 2) {
        cout << "Enter option:" << endl;
        cout << "1. Play" << endl;
        cout << "2. Exit\n" << endl;
        cin >> option;
        if (option == 1) {
            if (total > cost) {
                slot->spin();
                int payout = slot->payout();
                if (payout == 900) {
                    cout << "JACKPOT!" << endl;
                }
                total = total - cost;
                total = total + payout;
                displaySlotMachine(total, cost, slot);
                cout << "You won $" << payout << endl;
            }
            else {
                cout << "You ran out of money!" << endl;
            }
        }
    }
    cout << "Exiting ..." << endl;
    return 0;
}