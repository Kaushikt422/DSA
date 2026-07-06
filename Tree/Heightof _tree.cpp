#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left=right= NULL;
    }
};

int indx = -1;
Node* buildtree(vector<int> preorder){
    
    indx++;
    if(preorder[indx]== -1){
        return NULL;
    }
    Node* root = new Node(preorder[indx]);
    root->left= buildtree(preorder);
    root->right= buildtree(preorder);
    return root;

};

int heightofthe_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftht = heightofthe_tree(root->left);
    int rightht= heightofthe_tree(root->right);
    return max(leftht,rightht)+1;
}


int main(){

    vector<int> preorder = {2, 3, 5, -1, -1, 6, -1, -1, 4, 7, -1, -1, 8, -1, -1};
    Node* root = buildtree(preorder);
    // cout<<root->data;
    // cout<<root->left->data;
    // cout<<root->right->data;
    cout<<"ther height of the tree: ";
    cout<<heightofthe_tree(root);

    return 0;
}