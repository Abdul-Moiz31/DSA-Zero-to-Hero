// What is Graph ?
// A graph is a non-linear data structure consisting of nodes that have data and are connected to other nodes through edges.
// It is a collection of nodes or vertices, some of which may be connected by edges.
// Graphs can be directed or undirected, weighted or unweighted, and may have multiple edges between nodes.
// Graphs can be represented using an adjacency matrix or an adjacency list.
// Graphs can be used to solve many problems, such as finding the shortest path between two nodes ,
// finding the minimum spanning tree of a graph, and detecting cycles in a graph.
// Graphs can be implemented using various data structures, such as arrays, linked lists, and trees .

// Types of Graphs
// 1. Directed Graphs: In a directed graph, edges have direction. It means that edge (u,v) does not mean that there is an edge from v to u.
// 2. Undirected Graphs: In an undirected graph, edges do not have direction . It means that edge (u,v) means that there is an edge from v to u also


// Now the question is how to store the graph 
/* -> Matrix way 
-> List way */

#include <bits/stdc++.h>
using namespace std; 
// Matrix way 
// Method to store a graph. 


int main(){
      int n , m ;
      cin >> n >> m ;
      // Graph here
      int adj[n+1][m+1]; // n+1 because we are using 1 based indexing . or 0 based indexing use n * m
      for(int i= 0; i < m ;i++){
        int u , v; // u is source and v is destination
        cin >>  u >> v;
        adj[u][v] = 1;
        adj[v][u] = -1;
      }
      return 0;
}


// Now lets try using adjacency list
// Method to store a graph.
// Adjacency list is a collection of unordered lists, where each list represents the neighbors of a vertex in the graph.
// Each element in the list is a pair that contains the vertex and the edge weight. 
// Example 
// 1 -> 2 , 3 
// 2 -> 1 , 4
// 3 -> 1 , 4
// 4 -> 2 , 3
// In this example , 1 is connected to 2 and 3 , 2 is connected to 1 and 4 , 3 is connected to 1 and 4 , 4
// is connected to 2 and 3 .
// Adjacency list is more efficient than adjacency matrix when the graph is sparse .

// For Undirected Graph
int main(){
      int n , m ;
      cin >> n >> m ;
      // Graph here
      vector<int> adj[n+1]; // n+1 because we are using 1 based indexing . or 0 based indexing use n * m
      for(int i= 0; i < m ;i++){
        int u , v; // u is source and v is destination
        cin >>  u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
      return 0;
}

// For Directed Graph
int main(){
      int n , m ;
      cin >> n >> m ;
      // Graph here
      vector<int> adj[n+1]; // n+1 because we are using 1 based indexing . or 0 based indexing use n * m
      for(int i= 0; i < m ;i++){
        int u , v; // u is source and v is destination
        // The relation in this graph ios u-> v oO we dont need to push u in the list
        cin >>  u >> v;
        adj[u].push_back(v);
       
      }
      return 0;
}


// For Weighted Graph
int main(){
    int n , m ;
    cin >> n >> m ;
    // Graph here
    vector<pair<int,int>> adj[n+1]; // n+1 because we are using
    for(int i= 0; i < m ;i++){
        int u , v; // u is source and v is destination
        int w; // weight of the edge
        cin >>  u >> v >> w;
        adj[u].push_back({v,w});
        // adj[v].push_back({u,w}); // for undirected graph
        }
        return 0;
}
