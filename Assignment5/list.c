#include "list.h"
#include "graph.h"

nodeT* addLast(int key)
{
    nodeT *newElement = (nodeT *) malloc(sizeof(nodeT));
    newElement->key = key;
    newElement->next = NULL;
    if (last != NULL)
        last->next = newElement;
    else
        first = newElement;
    last = newElement;
    return last;
}

nodeT** matrixToList()
{
    nodeT **arrayOfLists, *last;
    arrayOfLists = (nodeT**) malloc(noOfVertices * sizeof(nodeT*));
    for(int i = 0; i < noOfVertices; i++)
    {
        arrayOfLists[i] = NULL;
        last = NULL;
        for(int j = 0; j < noOfVertices; j++)
        {
            if(adjMatrix[i][j] == 1)
            {
                last = addLast(j);
            }
        }
    }
    return arrayOfLists;
}
