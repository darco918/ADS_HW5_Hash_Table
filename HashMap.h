//
// Created by murja on 09-Jun-20.
//

#ifndef ADS_5_DARCO_MURJA_HASHMAP_H
#define ADS_5_DARCO_MURJA_HASHMAP_H

#include "HashEntry.h"

class HashMap {

private:

    HashEntry **table;

public:

    HashMap();
    int get(int);
    void add(int, int);
    void printAll();
};


#endif //ADS_5_DARCO_MURJA_HASHMAP_H
