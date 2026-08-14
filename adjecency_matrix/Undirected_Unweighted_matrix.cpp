#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Undirected Unweighted Graph
    int nodes = 5, edges = 6;
    vector<vector<int>>adjmat(nodes,vector<int>(nodes, 0));

    // Input edges
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cout << "Enter edge " << i + 1 << " (u v): ";
        cin >> u >> v;

        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }

    // Print adjacency matrix
    cout << "\nAdjacency Matrix:\n";

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}