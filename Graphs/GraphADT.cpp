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

// method to get number of vertices
int myGraph::NumberOfVertices() {
    return n;
}

// method to get number of edges
int myGraph::NumberOfEdges() {
    return e;
}

// isEmpty method to check if the number of
// vertices is zero or not
bool myGraph::isEmpty() {
    // if (n == 0)
    //     return true;
    // else
    //     return false;
    return (n == 0);
}

// method to get degree of the graph
int myGraph::Degree(int vertex) {
    // sum will contain the number of edges
    // incident on the passed vertex
    int sum = 0;
    // loop to get row sum
    for (int j = 1; j <= n; j++) {
        sum += arr[vertex][j];
    }
    // return sum (degree)
    return sum;
}

// method to check if an edge exists in
// between the two given vertices
bool myGraph::EdgeExists(int vertex1, int vertex2) {
    if (vertex1 < 1 || vertex1 > n || vertex2 < 1 || vertex2 > n) {
        cout << "Bad Input, no such element in graph\n";
    }
    return (arr[vertex1][vertex2] == 1)? true : false;
}