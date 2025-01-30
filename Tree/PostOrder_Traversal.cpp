// What is Post Order Traversal ?
// Post Order Traversal is a tree traversal algorithm that visits the left subtree, then the right subtree, and finally the root node.
// It is also known as Left-Right-Root traversal.
// It is used to get the post order traversal of a binary tree. 


// Procedure 
// Left -> right -> Root


#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
// Function to perform post order traversal of a binary tree
void postOrder(Node* root , vector<int> &arr){
    if( root == nullptr){
        return;
    }
    postOrder(root->left , arr);
    postOrder(root->right , arr);
    arr.push_back(root->data);
}
vector<int> postOrder(Node* root){
    vector<int>arr;
    postOrder(root , arr);
    return arr;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res = postOrder(root);
    cout << " Post Order Traversal is : " ;

    for(int val : res){
        cout<< val << " " << endl;
    }
    return 0;


}
