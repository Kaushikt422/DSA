#include <bits/stdc++.h>
 using namespace std;

 class Node{
 public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next = nullptr;
    }
 };

 Node *takeinput(){
    int data;
    cout<<"Enter the list :";
    cin>>data;
    Node *head = NULL;
    while(data != -1){
        Node *newnode = new Node(data);
        if(head == NULL){
            head = newnode;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL){
                    temp = temp->next;
            }
            temp ->next = newnode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head != NULL){
            cout<< head->data<<" ";
            head = head ->next;
    }
}

int main() {
    Node * n1 = takeinput();
    print(n1);
    return 0;
}