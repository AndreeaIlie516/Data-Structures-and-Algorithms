#ifndef ASSIGNMENT5_GRAPHREPRESENTATION_H
#define ASSIGNMENT5_GRAPHREPRESENTATION_H

#include "graph.h"

void readFromAdjMatrix(FILE *inputFile);

void printAdjMatrix();

int getNumberOfNeighborsOfVertex(int v);

int *getAllNeighborsOfVertex(int v);

#endif //ASSIGNMENT5_GRAPHREPRESENTATION_H
