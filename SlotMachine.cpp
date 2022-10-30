//============================================================================
// Name        : SlotMachine.cpp
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

SlotMachine::SlotMachine(){
    reel1 = new Reel();
    reel2 = new Reel();
    reel3 = new Reel();

    // add data to each real
    reel1->insert('A');
    reel1->insert('B');
    reel1->insert('C');
    reel1->insert('7');
    reel1->insert('A');
    reel1->insert('B');
    reel1->insert('A');
    reel1->insert('B');
    reel1->insert('A');
    reel1->insert('C');

    // reel2
    reel2->insert('A');
    reel2->insert('B');
    reel2->insert('C');
    reel2->insert('7');
    reel2->insert('A');
    reel2->insert('B');
    reel2->insert('A');
    reel2->insert('B');
    reel2->insert('A');
    reel2->insert('C');

    // reel3
    reel3->insert('A');
    reel3->insert('B');
    reel3->insert('C');
    reel3->insert('7');
    reel3->insert('A');
    reel3->insert('B');
    reel3->insert('A');
    reel3->insert('B');
    reel3->insert('A');
    reel3->insert('C');
}

SlotMachine::~SlotMachine() {
    delete reel1;
    delete reel2;
    delete reel3;
}

void SlotMachine::spin() {
    int roll = rand() % 100;
    // roll reel 1
    for (int i = 0; i < roll; i++) {
        reel1->head = reel1->head->next;
    }
    // roll reel 2
    roll = rand() % 100;
    for (int i = 0; i < roll; i++) {
        reel2->head = reel2->head->next;
    }
    // roll reel 3
    roll = rand() % 100;
    for (int i = 0; i < roll; i++) {
        reel3->head = reel3->head->next;
    }
}

int SlotMachine::payout() {
    // get data from each reel
    char c1 = reel1->head->data;
    char c2 = reel2->head->data;
    char c3 = reel3->head->data;

    // check each reel for data
    if (c1 == c2 && c2 == c3) {
        if (c1 == 'A') {
            return 14;
        }
        else if (c2 == 'B') {
            return 35;
        }
        else if (c3 == 'C') {
            return 100;
        }
        else {
            return 900;
        }
    }
    else {
        return 0;
    }
}

char SlotMachine::getReel1prev() {
    return reel1->head->prev->data;
}

char SlotMachine::getReel1() {
    return reel1->head->data;
}
char SlotMachine::getReel1next() {
    return reel1->head->next->data;
}

char SlotMachine::getReel2prev() {
    return reel2->head->prev->data;
}

char SlotMachine::getReel2() {
    return reel2->head->data;
}
char SlotMachine::getReel2next() {
    return reel2->head->next->data;
}

char SlotMachine::getReel3prev() {
    return reel3->head->prev->data;
}

char SlotMachine::getReel3() {
    return reel3->head->data;
}
char SlotMachine::getReel3next() {
    return reel3->head->next->data;
}