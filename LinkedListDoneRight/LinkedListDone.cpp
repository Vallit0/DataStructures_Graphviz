//
// Created by VALLE on 09/08/2022.
//

#include "LinkedListDone.h"
#include "Node.h"
void LinkedListDone::append(string inputSong){
    Node* newNode = new Node();
    newNode->song = inputSong;
    //We need to append this


    if (head == NULL){

        head = newNode;
    }else {
        Node* copyCat = head;
        while (copyCat->next != NULL) {
            copyCat = copyCat->next;
        }
        copyCat->next = newNode;
    }
}

void LinkedListDone::print() {
    Node *copyCat;
    copyCat = head;
    while(copyCat-> next != NULL){
        cout << copyCat->song + "->";
        copyCat = copyCat->next;

    }
    cout << copyCat->song;
}

void LinkedListDone::graph(){
    // set the contet


    Node *copyCat;
    Node *lastCopyCat;
    copyCat = head;
    lastCopyCat = head;
    int i = 0;
    while(copyCat->next != NULL){
        lastCopyCat = copyCat;
        int x = i+1;
        content += to_string(i) + "[label=\"{ <data> "+copyCat->song+" | <ref>  }\"];\n";
        content += to_string(i) + ":ref:"+ to_string(x) +" -> "+to_string(x) + ":data [arrowhead=vee, arrowtail=dot, dir=both, tailclip=false];\n";
        copyCat = copyCat->next;
        i += 1;
    }
    content += to_string(i)+"[label=\"{ <data> "+copyCat->song+" | <ref>  }\"];\n";
    content += "}";
    cout << content;
}