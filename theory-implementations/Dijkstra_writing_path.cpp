
#include <bits/stdc++.h>
using namespace std;
// A Java program for Dijkstra's
// single source shortest path
// algorithm. The program is for
// adjacency matrix representation
// of the graph.
 
int NO_PARENT = -1;
 
// Function to print shortest path
// from source to currentVertex
// using parents array
void printPath(int currentVertex, vector<int> parents)
{
 
    // Base case : Source node has
    // been processed
    if (currentVertex == NO_PARENT) {
        return;
    }
    printPath(parents[currentVertex], parents);
    cout << currentVertex << " ";
}
 
// A utility function to print
// the constructed distances
// array and shortest paths
void printSolution(int startVertex, vector<int> distances,
                   vector<int> parents)
{
    int nVertices = distances.size();
    cout << "Vertex\t Distance\tPath";
 
    for (int vertexIndex = 0; vertexIndex < nVertices;
         vertexIndex++) {
        if (vertexIndex != startVertex) {
            cout << "\n" << startVertex << " -> ";
            cout << vertexIndex << " \t\t ";
            cout << distances[vertexIndex] << "\t\t";
            printPath(vertexIndex, parents);
        }
    }
}
 
// Function that implements Dijkstra's
// single source shortest path
// algorithm for a graph represented
// using adjacency matrix
// representation
 
void dijkstra(vector<vector<int> > adjacencyMatrix,
              int startVertex)
{
    int nVertices = adjacencyMatrix[0].size();
 
    // shortestDistances[i] will hold the
    // shortest distance from src to i
    vector<int> shortestDistances(nVertices);
 
    // added[i] will true if vertex i is
    // included / in shortest path tree
    // or shortest distance from src to
    // i is finalized
    vector<bool> added(nVertices);
 
    // Initialize all distances as
    // INFINITE and added[] as false
    for (int vertexIndex = 0; vertexIndex < nVertices;
         vertexIndex++) {
        shortestDistances[vertexIndex] = INT_MAX;
        added[vertexIndex] = false;
    }
 
    // Distance of source vertex from
    // itself is always 0
    shortestDistances[startVertex] = 0;
 
    // Parent array to store shortest
    // path tree
    vector<int> parents(nVertices);
 
    // The starting vertex does not
    // have a parent
    parents[startVertex] = NO_PARENT;
 
    // Find shortest path for all
    // vertices
    for (int i = 1; i < nVertices; i++) {
 
        // Pick the minimum distance vertex
        // from the set of vertices not yet
        // processed. nearestVertex is
        // always equal to startNode in
        // first iteration.
        int nearestVertex = -1;
        int shortestDistance = INT_MAX;
        for (int vertexIndex = 0; vertexIndex < nVertices;
             vertexIndex++) {
            if (!added[vertexIndex]
                && shortestDistances[vertexIndex]
                       < shortestDistance) {
                nearestVertex = vertexIndex;
                shortestDistance
                    = shortestDistances[vertexIndex];
            }
        }
 
        // Mark the picked vertex as
        // processed
        added[nearestVertex] = true;
 
        // Update dist value of the
        // adjacent vertices of the
        // picked vertex.
        for (int vertexIndex = 0; vertexIndex < nVertices;
             vertexIndex++) {
            int edgeDistance
                = adjacencyMatrix[nearestVertex]
                                 [vertexIndex];
 
            if (edgeDistance > 0
                && ((shortestDistance + edgeDistance)
                    < shortestDistances[vertexIndex])) {
                parents[vertexIndex] = nearestVertex;
                shortestDistances[vertexIndex]
                    = shortestDistance + edgeDistance;
            }
        }
    }
 
    printSolution(startVertex, shortestDistances, parents);
}

// 8 15 // V E
// 0 1 9
// 1 2 24
// 2 7 19
// 6 7 37
// 0 6 15
// 5 2 18
// 3 2 6
// 3 7 6
// 4 7 16
// 5 4 30
// 2 4 2
// 4 3 10
// 0 5 14
// 5 6 5
// 6 4 20

// Driver Code
int main()
{
    vector<vector<int> > adjacencyMatrix
        = { { 0, 9, 0, 0, 0, 14, 15, 0, 0 },
            { 0, 0, 24, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 2, 0, 0, 19, 0 },
            { 0, 0, 6, 0, 0, 0, 0, 6, 0 },
            { 0, 0, 0, 10, 0, 0, 0, 16, 0 },
            { 0, 0, 18, 0, 30, 0, 5, 0, 0 },
            { 0, 0, 0, 0, 20, 0, 0, 37, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
    dijkstra(adjacencyMatrix, 0);
    return 0;
}

// A -> B           9              A B
// A -> C           32             A F C
// A -> D           44             A F C E D
// A -> E           34             A F C E
// A -> F           14             A F
// A -> G           15             A G
// A -> Z           50             A F C E H
