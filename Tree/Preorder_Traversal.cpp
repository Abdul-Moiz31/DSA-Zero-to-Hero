// What is Pre Order Traversal ?
// Pre Order Traversal is a tree traversal algorithm that visits the root node first, then traverses the left subtree, and finally traverses the right subtree.
// It is called Pre Order because it visits the parent node before its children.
// It is used to traverse the tree in a way that the parent node is visited before its children .

// Procedure 

// Root -> left -> Right 

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL ;
    }
};

void preOrder(Node* root , vector<int> &arr){
    if(root == NULL){
        return;
    }
    arr.push_back(root->data);
    preOrder(root->left , arr);
    preOrder(root->right , arr);
}
vector<int> preOrder(Node* root){
    vector<int>arr;
    preOrder(root , arr );
    return arr;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node (2);
    root->right  = new Node (3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    root->right->left = new Node (6);
    root->right->right = new Node (7);

    vector<int> res = preOrder(root);

    cout<< "Pre Order Traversal is : " ;

    for(int val : res){
        cout << val << " " << endl;
    }
    return 0;

}