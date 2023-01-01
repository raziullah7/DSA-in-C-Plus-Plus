#include "GraphADT.h"
#include <iostream>
using namespace std;

// implementing constructor
myGraph::myGraph(int vertices, int edges) {
    this->n = vertices;
    this->e = edges;
    // (n+1) because arrays are 0 indexed
    this->arr = new int*[n + 1];

    // making the adjacency matrix, while not
    // utilizing 0 index memory
    for (int i = 1; i <= n; i++) {
        arr[i] = new int[n + 1];
    }

    // filling up every location with 0, where the
    // 0 index of every nested array is also not
    // utilized for the sake of making it a matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = 0;
        }
    }
}

// destructor
myGraph::~myGraph() {
    delete [] arr;
}