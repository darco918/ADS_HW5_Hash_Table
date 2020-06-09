#include "HashMap.h"
#include <iostream>
int main() {

    HashMap h;
    h.add(100,100);
    h.add(101,120);
    h.add(102,6);
    h.add(5,2);
    h.add(3,7);
    //h.printAll();
    std::cout<<"THe value of the key 102 is "<<h.get(102);
    return 0;

}