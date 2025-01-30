// Level Order of Traversal

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

void levelOrder1(Node* root , vector<vector<int>> &arr){
      if(root==nullptr) return ;

      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0 ; i<size ;i++){
            Node *node = q.front();
            q.pop();
            if(node->left != NULL)
            q.push(node->left);
            if(node->right != NULL)
            q.push(node->right);
            level.push_back(node->data);
        }
        arr.push_back(level);
      }
   } 

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> arr;
        levelOrder1(root , arr);
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

    vector<vector<int>> res = levelOrder(root);
    cout << " The level Order Traversal is : " ;

    for(const auto& level : res){
        for(int val : level){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;


}