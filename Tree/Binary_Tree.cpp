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
// pre order traversall

void preOrder(Node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
};

//inorder traversal 

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

};

//postorder traversal

void postorder(Node* root){
    if (root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

// level order traversa
void levelorder(Node* root){

    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* curr= q.front();
        q.pop();
        cout<< curr->data;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
};


int main(){

    vector<int> preorder = {2, 3, 5, -1, -1, 6, -1, -1, 4, 7, -1, -1, 8, -1, -1};
    Node* root = BuildTree(preorder);
    //for check the buildtree function and tree build or not 
    // cout<< root->data<<endl;
    // cout<< root->left->data<<endl;
    // cout<< root->right->data;
    preOrder(root); // preorder traversall
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
    

    return 0;
}