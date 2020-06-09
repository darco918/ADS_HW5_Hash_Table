//
// Created by murja on 09-Jun-20.
//

#include "HashEntry.h"

HashEntry::HashEntry(int x, int y) {

    this->key = x;
    this->value = y;
}

int HashEntry::getKey() {
    return key;
}

int HashEntry::getValue() {
    return value;
}
