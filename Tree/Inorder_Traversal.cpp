// Inorder Traversal ? 
/*Inorder traversal is a tree traversal technique where the left subtree is visited first, 
then the root node, and finally the right subtree.*/

// Procedure how to iterate thru tree

//  Left -> Root -> Right

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left =right = NULL;
    }
};
 // Base Case 
void inorder(Node* root , vector<int> &arr ){
    if(root == nullptr){
        return;
    }
    // Recursively traverse the left subtree
    inorder(root->left , arr);
    arr.push_back(root->data); // pushed into vector
    inorder(root->right , arr); // right subtree
}
// Function to initiate inorder traversal
vector<int> inorder(Node* root){
    vector<int>arr;
    inorder(root , arr); // Call the inorder traversal function
    return arr;
}

int main (){
    // Sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res = inorder(root); // Getting inorder traversal
     // Displaying the inorder traversal result
    cout << " Inorder Traversal : " ;
    for(int val: res){ // inorder traversal result
        cout << val << " " << endl;
    }
    return 0;


}