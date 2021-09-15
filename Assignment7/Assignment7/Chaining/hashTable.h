//
// Created by andre on 05.05.2020.
//

#ifndef CHAINING_HASHTABLE_H
#define CHAINING_HASHTABLE_H

#include "list.h"

static const float INITIAL_HT_SIZE_FACTOR = .33;

listT * hashTable;
int size;


int hashFunction(char * content, int i);

void initHashTable(int N);

void insertElement(char * element);

void computeDistributionsPerBucket();


#endif //CHAINING_HASHTABLE_H
