//
// Created by andre on 05.05.2020.
//

#include "node.h"

NodeT *createNode(int data) {
    NodeT *newNode = (NodeT *) malloc(sizeof(NodeT));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

