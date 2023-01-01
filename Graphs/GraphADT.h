class myGraph {
private:
    // head node array for adjacency matrix
    int** arr;
    // number of vertices
    int n;
    // number of edges
    int e;
public:
    myGraph(int, int);
    ~myGraph();
    bool isEmpty();
	int NumberOfVertices();
	int NumberOfEdges();
	int Degree(int);
	bool EdgeExists(int, int);
	void InsertEdge(int, int);
	void DeleteEdge(int, int);
	void DisplayAdjMatrix();
};