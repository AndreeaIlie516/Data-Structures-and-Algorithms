//
// Created by andre on 05.05.2020.
//

#ifndef ASSIGNMENT6_GRAPHREPRESENTATION_H
#define ASSIGNMENT6_GRAPHREPRESENTATION_H

#include "graph.h"

int **createMatrix(int noOfVertices);

void initializeMatrix(int noOfVertices, int **adjMatrix);

int getNumberOfVertices(FILE *inputFile);

int **getAdjMatrix(FILE *inputFile, int noOfVertices);

void printAdjMatrix(FILE *outputFile, int noOfVertices, int **adjMatrix);

int getNumberOfNeighboursOfVertex(int noOfVertices, int **adjMatrix, int v);

int *getAllNeighboursOfVertex(int noOfVertices, int **adjMatrix, int v);


void freeAdjMatrix(int noOfVertices, int **adjMatrix);


#endif //ASSIGNMENT5_2_0_GRAPHREPRESENTATION_H


#endif //ASSIGNMENT6_GRAPHREPRESENTATION_H
