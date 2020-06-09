//
// Created by murja on 09-Jun-20.
//

#include <cstddef>
#include <cstring>
#include "HashMap.h"
#include <iostream>

const int TABLE_SIZE = 10;
HashMap::HashMap() {
    table = new HashEntry*[TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; i++)
        table[i] = nullptr;
}

int HashMap::get(int key) {

        int hash = (key % TABLE_SIZE);

        while (table[hash] != nullptr && table[hash]->getKey() != key)

            hash = (hash + 1) % TABLE_SIZE;

        if (table[hash] == nullptr) return -1;
        else
            return table[hash]->getValue();
}


void HashMap::add(int key, int value){
    int hash = (key % TABLE_SIZE);
    while (table[hash] != NULL && table[hash]->getKey() != key)

        hash = (hash + 1) % TABLE_SIZE;

    if (table[hash] != NULL)

        delete table[hash];

    table[hash] = new HashEntry(key, value);
}

void HashMap::printAll() {
    for (int i = 0; i < TABLE_SIZE; i++)
        std::cout<<table[i]<<" ";
    std::cout<<"\n";
    for (int i = 0; i < TABLE_SIZE; i++)
        std::cout<<table[i]->getValue()<<" ";
}
