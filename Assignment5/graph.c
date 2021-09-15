#include "graph.h"

nodeT *createNode(int key) {
    nodeT *newNode = (nodeT *) malloc(sizeof(nodeT));
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}


