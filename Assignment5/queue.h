#ifndef ASSIGNMENT5_QUEUE_H
#define ASSIGNMENT5_QUEUE_H

#include "graph.h"

void enqueue(int content);

void dequeue();

nodeT *peekQueue();

int isEmptyQueue();

nodeT *queue;

#endif //ASSIGNMENT5_QUEUE_H
