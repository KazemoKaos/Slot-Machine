//============================================================================
// Name        : Reel.cpp
// Author      : Tyler Nguyen
// Version     : 10/15/20
// Description : Program 2
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include "Reel.hpp"
using namespace std;

Reel::Reel(){
    head = nullptr;
}

Reel::~Reel() {
    Node* iterator = head;
    while (iterator != nullptr) {
        head = head->next; 
        delete iterator; 
        iterator = head;
    }
}

void Reel::insert(char c) {
    if (head == nullptr) {
        head = new Node(c);
    }
    else {
        Node* n = new Node(c);
        n->next = head;
        n->prev = head->prev;
        head->prev->next = n;
        head->prev = n;
        head = n;
    }
}