//
// Created by VALLE on 09/08/2022.
//
#include <iostream>
using namespace std;

#ifndef LINKEDLISTDONERIGHT_NODE_H
#define LINKEDLISTDONERIGHT_NODE_H
#include <stddef.h>

class Node {
public:
    string song;
    Node *next;

    Node() {
        next = NULL;
        song = "";
    }

private:



};
#endif //LINKEDLISTDONERIGHT_NODE_H
