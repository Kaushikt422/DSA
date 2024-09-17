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
    Node *tail = NULL;
    while(data != -1){
        Node *newnode = new Node(data);
        if(head==NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;

            // or

            // tail = tail->next;

        }
            cin>>data;
    }
    return head;
}

void print(Node *head){
    cout<<"The list is: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int count(Node *head){
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp ->next;
    }
    return cnt;
}

int countrecr(Node *head){
    int count = 0;
    while(head != nullptr){
        if(head==NULL){
            return 0;
        }
         return 1+ countrecr(head ->next);
        }
}
int main(){
    Node *n1 = takeinput();
    print(n1);
    cout<<"Number of element: "<<count(n1)<<" "<<endl;
    cout<<"Number of element: "<<countrecr(n1);
    return 0;
}