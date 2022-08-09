//
// Created by VALLE on 09/08/2022.
//

#ifndef LINKEDLISTDONERIGHT_LINKEDLISTDONE_H
#define LINKEDLISTDONERIGHT_LINKEDLISTDONE_H
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedListDone {
public:
    //First, create a pointer called head

    Node *head;
    Node *tail;
    string content;
    LinkedListDone() {
    //The constructor assigns head the value of NULL
        head = NULL;
        tail = NULL;
        content = "\ndigraph foo {\n        rankdir=LR;\n        node [shape=record];";
    }
    //Then we declare functions of the linked list
    void append(string song);
    void print();
    void graph();
};


#endif //LINKEDLISTDONERIGHT_LINKEDLISTDONE_H
