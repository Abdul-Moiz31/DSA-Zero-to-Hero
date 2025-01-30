//  Types of DFS are 
/*
-> Inorder Traversal 
-> Preorder Traversal
-> Post Order Traversal  */

#include <bits/stdc++.h>
using namespace std;

// The initialization of the value would be same 

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val ;
        left = right = NULL;
    }
};


// Function for the Inorder Traversal 
void inOrder(Node* root , vector<int> &arr){
    if(root == nullptr){
        return ;
    }
    // Steps how the Inorder Traversal would be done 
    // Need to remember one thing that the Inorder traversal is left -> root -> right
    inOrder(root->left , arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);

}
// Need to call the function
vector <int> inOrder(Node* root){
vector<int> arr;
   inOrder(root , arr);
   return arr;
}


// Function for the PreOrder Traversal 
void preOrder(Node* root , vector<int> &arr){
    if(root == nullptr){
        return ;
    }
    // Steps how the PreOrder Traversal would be done 
    // Need to remember one thing that the Inorder traversal is root -> left -> right
    arr.push_back(root->data);
    preOrder(root->left , arr);
    preOrder(root->right, arr);

}
 // Calling 
vector <int> preOrder(Node* root){
vector<int> arr;
   preOrder(root , arr);
   return arr;
}


// Function for the PreOrder Traversal 
void postOrder(Node* root , vector<int> &arr){
    if(root == nullptr){
        return ;
    }
    // Steps how the PostOrder Traversal would be done 
    // Need to remember one thing that the Inorder traversal is  left -> right -> root
    postOrder(root->left , arr);
    postOrder(root->right, arr);
    arr.push_back(root->data);

}
 // Calling 
vector <int> postOrder(Node* root){
vector<int> arr;
   postOrder(root , arr);
   return arr;
}

// Main Function would be same for all just need top change the call fun
int main (){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
     // Just need to change the function call only
    vector<int> res = inOrder(root);
    cout << "Your Traversal is : "  ;
    
    for(int val :res){
        cout <<val << " " << endl;
    }
    return 0;
}