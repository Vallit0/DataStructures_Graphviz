#include <iostream>
#include "Node.h"
#include "LinkedListDone.h"
#include <cstdlib>
int main() {


    LinkedListDone newList;
    newList.append("Tylersito");
    newList.append("Ok");
    newList.append("Ok2");

    newList.print();
    newList.graph();
    return 0;
}
