#include <stdio.h>
#include <stdlib.h>
#include "graphTraversals.h"
#include "graphRepresentation.h"
#include "list.h"

#define INPUT_FILE_PATH "../input.dat"

nodeT** matrixToList(int **adjMatrix, int nodesNo)
{
    nodeT **arrayOfLists, *last;
    arrayOfLists = (nodeT**) malloc(nodesNo * sizeof(nodeT*));
    for(int i = 0; i < nodesNo; i++)
    {
        arrayOfLists[i] = NULL;
        last = NULL;
        for(int j = 0; j < nodesNo; j++)
        {
            if(adjMatrix[i][j] == 1)
            {
                last = addLast(j, last, &(arrayOfLists[i]));
            }
        }
    }
    return arrayOfLists;
}
void printArrayOfLists(nodeT **arrayOfLists, int nodesNo)
{
    printf("The array of lists is:\n");
    for(int i = 0; i < nodesNo; i++)
    {
        printf("List %d: ", i);
        nodeT *currentNode = arrayOfLists[i];
        while (currentNode != NULL)
        {
            printf("%d ", currentNode->key);
            currentNode = currentNode->next;
        }
        printf("\n");
    }
}
int** listToMatrix(nodeT **arrayOfLists, int nodesNo)
{
    int **adjMatrixFromList;
    adjMatrixFromList = (int**) malloc(nodesNo * sizeof(int*));
    for(int i = 0; i < nodesNo; i++)
    {
        adjMatrixFromList[i] = (int*) malloc(nodesNo * sizeof(int));
        for(int j = 0; j < nodesNo; j++)
        {
            adjMatrixFromList[i][j] = 0;
        }
    }
    for(int i = 0; i < nodesNo; i++)
    {
        nodeT *currentNode = arrayOfLists[i];
        while (currentNode != NULL)
        {
            adjMatrixFromList[i][currentNode->key]++;
            currentNode = currentNode->next;
        }
    }
    return adjMatrixFromList;
}
void printMatrix(int **matrix, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    FILE *inputFile = fopen(INPUT_FILE_PATH, "r");
    if(inputFile == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    else
    {
        int **adjMatrixfromList;
        readFromAdjMatrix(inputFile);
        printf("The read matrix is:\n");
        printMatrix(adjMatrix, noOfVertices);
        nodeT **arrayOfListsCopy;
        nodeT **arrayOfLists = matrixToList(adjMatrix, noOfVertices);
        printArrayOfLists(arrayOfLists, noOfVertices);
        adjMatrixfromList = listToMatrix(arrayOfLists, noOfVertices);
        printf("The adjacency matrix from the array of lists is:\n");
        printMatrix(adjMatrixfromList, noOfVertices);
        bfs(0);
        dfsRec(0, noOfVertices, adjMatrix);
        arrayOfListsCopy = (nodeT**) malloc(noOfVertices * sizeof(nodeT*));
        for(int i = 0; i< noOfVertices; i++)
        {
            arrayOfListsCopy[i] = arrayOfLists[i];
        }
        bfsList(0);
        dfsRecList(0, noOfVertices, arrayOfListsCopy);
        int a = 0;
    }

    return 0;
}