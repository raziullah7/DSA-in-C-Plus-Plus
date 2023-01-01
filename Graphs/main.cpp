#include "GraphADT.cpp"

int main() {
    // square shaped graph with 4 vertices
    // and 4 edges
    myGraph graph(4, 4);
    
    graph.InsertEdge(1, 2);
    graph.InsertEdge(2, 3);
    graph.InsertEdge(3, 4);
    graph.InsertEdge(4, 1);
    cout << "----------------------------------\n";
    cout << "Graph Degree : " << graph.Degree(2) << endl;
    cout << "Edge Exists : " << graph.EdgeExists(3, 2) << endl;
    graph.DisplayAdjMatrix();

    graph.DeleteEdge(1, 2);
    cout << "----------------------------------\n";
    cout << "Graph Degree : " << graph.Degree(2) << endl;
    cout << "Edge Exists : " << graph.EdgeExists(2, 1) << endl;
    graph.DisplayAdjMatrix();

    cout << "----------------------------------\n";
    return 0;
}
