#include "GraphADT.h"
#include <iostream>
using namespace std;

// implementing constructor
myGraph::myGraph(int vertices, int edges) {
    this->n = vertices;
    this->e = edges;
}