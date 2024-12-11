#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge between two vertices
void addEdge(vector<vector<int>> &adj, int i, int j)
{
    adj[i].push_back(j);
    adj[j].push_back(i); // Undirected
}

// Function to display the adjacency list
void displayAdjList(const vector<vector<int>> &adj)
{
    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << ": "; // Print the vertex
        for (int j : adj[i])
        {
            cout << j << " "; // Print its adjacent
        }
        cout << endl;
    }
}

// ADJANCEY MATRIX
//  void addEdge(vector<vector<int>> &mat, int i, int j)
//  {
//      mat[i][j] = 1;
//      mat[j][i] = 1; // Since the graph is undirected
//  }

// void displayMatrix(vector<vector<int>> &mat)
// {
//     int V = mat.size();
//     for (int i = 0; i < V; i++)
//     {
//         for (int j = 0; j < V; j++)
//             cout << mat[i][j] << " ";
//         cout << endl;
//     }
// }