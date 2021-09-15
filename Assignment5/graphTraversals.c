#include "graphTraversals.h"
#include "graphRepresentation.h"

void bfs(int startNode) {
    printf("BFS matrix started\n");
    int *visited = (int *) malloc(nrOfVertices * sizeof(int));
    int i, v, w;

    for (i = 0; i < nrOfVertices; i++) {
        visited[i] = UNVISITED;
    }

    enqueue(startNode);
    visited[startNode] = VISITED;
    printf("%c ", startNode + 'A');

    while (!isEmptyQueue()) {
        v = peekQueue()->key;
        dequeue();

        int nrOfNeighbors = getNumberOfNeighborsOfVertex(v);
        int *neighbors = getAllNeighborsOfVertex(v);
        for (i = 0; i < nrOfNeighbors; i++) {
            w = neighbors[i];
            if (visited[w] == UNVISITED) {
                printf("%c ", w + 'A');
                enqueue(w);
                visited[w] = VISITED;
            }
        }
    }

    printf("\nBFS ended\n\n");
}

void bfsList(int startNode){
    printf("BFS list started\n");
    int *visited = (int *) malloc(nrOfVertices * sizeof(int));
    int i, v, w;

    for (i = 0; i < nrOfVertices; i++) {
        visited[i] = UNVISITED;
    }

    enqueue(startNode);
    visited[startNode] = VISITED;
    printf("%d ", startNode);

    while (!isEmptyQueue()) {
        v = peekQueue()->key;
        dequeue();

        while(adjList[v] != NULL)
        {
            w = adjList[v]->key;
            if(visited[w] == UNVISITED)
            {
                printf("%d ", w);
                enqueue(w);
                visited[w] = VISITED;
            }
            adjList[v] = adjList[v]->next;
        }
    }

    printf("\nBFS list ended\n\n");
}


void dfsRec(int x, int *visited) {
    int i;
    visited[x] = VISITED;
    int nrOfNeighbors = getNumberOfNeighborsOfVertex(x);
    int *neighbors = getAllNeighborsOfVertex(x);
    printf("%c ", x + 'A');
    for (i = 0; i < nrOfNeighbors; i++) {
        int w = neighbors[i];
        if (visited[w] == UNVISITED) {
            dfsRec(w, visited);
        }
    }
}

void dfsRecList(int v, int *visited) {
    int i;
    visited[v] = VISITED;
    printf("%d ", v);
    while(adjList[v] != NULL)
    {
        int w = adjList[v]->key;
        if (visited[w] == UNVISITED) {
            dfsRecList(w, visited, adjList);
        }
        adjList[v] = adjList[v]->next;
    }
}
