#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data){
        this ->data = data;
        next = nullptr;
    }

};

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<head->data;
}

int main(){

    Node * head = new Node(10);
    Node * n2 = new Node(20);
    Node * n3 = new Node(30);
    Node * n4 = new Node(40);
    
    head ->next = n2;
    n2->next = n3;
    n3->next = n4;
    print(head);
}
