// What is Iterative PreOrder Approach Using Stack ?
// It is a method of traversing a tree data structure where we first visit the root node, the left subtree, and then the right subtree. This approach uses a stack to 
// keep track of the nodes that need to be visited. 
// 



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

void iterativePreOrder(Node* root , vector<int> &arr){
     if(root == nullptr){
        return;
     }
    
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        arr.push_back(root->data);
        if(root->left != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
        
    }
}
vector<int> preOrder(Node* root){
vector<int> arr;
iterativePreOrder(root , arr);
return arr;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    vector<int> res= preOrder(root);
    cout << " The Iterative Pre Order Traversal Using stack is : ";

    for(int val : res){
        cout<<val << " ";
    }
    return 0;

}