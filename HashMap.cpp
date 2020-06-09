//
// Created by murja on 09-Jun-20.
//

#include <cstddef>
#include <cstring>
#include "HashMap.h"
#include <iostream>

const int mapSize = 10;
HashMap::HashMap() {
    table = new HashEntry*[mapSize];

    for (int i = 0; i < mapSize; i++)
        table[i] = nullptr;
}

int HashMap::get(int key) {

        int hash = (key % mapSize);

        while (table[hash] != nullptr && table[hash]->getKey() != key)

            hash = (hash + 1) % mapSize;

        if (table[hash] == nullptr) return -1;
        else
            return table[hash]->getValue();
}


void HashMap::add(int key, int value){
    int hash = (key % mapSize);
    while (table[hash] != nullptr && table[hash]->getKey() != key)

        hash = (hash + 1) % mapSize;

    if (table[hash] != nullptr)

        delete table[hash];

    table[hash] = new HashEntry(key, value);

}

void HashMap::printAll() {
    for (int i = 0; i < mapSize; i++)
        std::cout<<table[i]<<" ";
    std::cout<<"\n";
    for (int i = 0; i < mapSize; i++)
        std::cout<<table[i]->getValue()<<" ";
}