#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Undirected weighted Graph
    int nodes = 5, edges = 6;
    vector<vector<int>> adjmat(nodes, vector<int>(nodes, 0));

    // Input edges
    for (int i = 0; i < edges; i++)
    {
        int u, v,w;
        cout << "Enter edge " << i + 1 << " (u v): ";
        cin >> u >> v;
        cout<<"Enter weight of "<< i +1<<" edge: ";
        cin>>w;

        adjmat[u][v] = w;
        adjmat[v][u] = w;
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