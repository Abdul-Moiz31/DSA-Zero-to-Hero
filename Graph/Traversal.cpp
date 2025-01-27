// Traversal in graphs
// Time complexity: O(V + E)
// Space complexity: O(V + E)
// Definition
// 1. Create a queue and enqueue all the vertices of the graph
// 2. Create a visited array and mark all the vertices as not visited
// 3. While the queue is not empty, dequeue a vertex from the queue
// 4. For each adjacent vertex of the dequeued vertex, if it is not visited,
// mark it as visited and enqueue it in the queue
// 5. Repeat step 3 and 4 until the queue is empty
// 6. Return the visited array
// Example usage
// Create a graph with 5 vertices and 6 edges

// Small Algo

// declaring array

// N=10
// make a an array , Declare visited

// visited = [0, 0, 0, 0, 0, 0 , 0, 0, 0, 0]
// Run the loop till last
// fn(i=1-> 10);
//    if(!vis[i]){
//     traversal[i]; // repeat this till al nodes are visited
//    }

// Two Traversal methods
// 1. DFS (Depth First Search)
// 2. BFS (Breadth First Search)

// What is BFS (Breadth First Search)
// BFS is a traversal algorithm where you visit all the nodes at present depth prior to nodes at the next depth level.
//  It uses a queue data structure to keep track of the nodes to be visited.
//  Also called levee wise traversal.
//  Example usage
//  Create a graph with 5 vertices and 6 edges
//  Start from vertex 0 and visit all the vertices at present depth level before moving to the next
//  level. The order of visitation will be 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

// BFS Traversal Algorithm
#include <bits/stdc++.h>
using namespace std;
// Function to return Breadth First Traversal of given graph.
vector<int> bfs(int n, vector<int> adj[])
{

    int vis[n] = {0}; // Visited array
    vis[0] = 1;       // Mark the first node as visited
    queue<int> q;     // Queue for BFS
    q.push(0);        // Start from node 0
    vector<int> bfs;  // Vector to store BFS traversal

    while (!q.empty())
    {
        int node = q.front(); // Get the front node
        q.pop();              // Remove it from the queue
        bfs.push_back(node);  // Add it to the BFS result

        for (auto it : adj[node])
        { // Iterate through adjacent nodes
            if (!vis[it])
            {                // If not visited
                vis[it] = 1; // Mark as visited
                q.push(it);  // Add to the queue
            }
        }
    }
    return bfs; // Return the BFS traversal
}

// 1. What is DFS (Depth First Search)
// DFS is a traversal algorithm where you visit a node and then visit all of its adjacent nodes befor moving to the next node.
// It uses a stack data structure to keep track of the nodes to be visited.
// Example usage
// Create a graph with 5 vertices and 6 edges
// Start from vertex 0 and visit all the adjacent nodes before moving to the next node
// The order of visitation will be 0, 1, 2, 4, 3, 5, 6, 7, 8, 9
// DFS Traversal Algorithm
#include <bits/stdc++.h>
using namespace std;
// Function to return Depth First Traversal of given graph.
void dfs1(int node, vector<int> adj[], int vis[], vector<int> &dfs)
{
    vis[node] = 1; // Mark as visited
    for (auto it : adj[node])
    { // Iterate through adjacent nodes
        if (!vis[it])
        { // If not visited

            dfs1(it  , adj , vis , dfs); // Push to the stack
        }
    }
}
vector<int> dfs(int n, vector<int> adj[])
{
    int vis[n] = {0};
    int start = 0;    // Visited array
    vector<int> dfs;  // Vector to store DFS traversal
    dfs1(start , adj , vis , dfs);
    
    return dfs;
}


