#include<bits/stdc++.h>
using namespace std;

class Node {
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int indx =  -1;
Node *BuildTree(vector<int> preorder){

    indx++;
    if(preorder[indx]==-1){
        return NULL;
    }

    Node* root = new Node(preorder[indx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;

}

void preOrder(Node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
};

int main(){

    vector<int> preorder = {2, 3, 5, -1, -1, 6, -1, -1, 4, 7, -1, -1, 8, -1, -1};
    Node* root = BuildTree(preorder);
    // cout<< root->data<<endl;
    // cout<< root->left->data<<endl;
    // cout<< root->right->data;
    preOrder(root);
    

    return 0;
}