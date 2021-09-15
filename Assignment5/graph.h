#ifndef ASSIGNMENT5_GRAPH_H
#define ASSIGNMENT5_GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "queue.h"

#define UNVISITED 0
#define VISITED 1

typedef struct node {
    int key;
    struct node *next;
} nodeT;

nodeT *createNode(int key);

int **adjMatrix;
int noOfVertices;

#endif //ASSIGNMENT5_GRAPH_H
