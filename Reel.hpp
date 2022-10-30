//============================================================================
// Name        : Reel.hpp
// Author      : Tyler Nguyen
// Version     : 10/15/20
// Description : Program 2
//============================================================================

#ifndef Reel_hpp
#define Reel_hpp
using namespace std;

class Reel
{
private:
    class Node
    {
    public:
        char data;
        Node* next;
        Node* prev;
        Node(char i) {
            data = i;
            next = this; 
            prev = this; 
        }
    };
public:
    Node* head;
    void insert(char c);
    Reel();
    ~Reel();
};

#endif /* Reel_hpp */