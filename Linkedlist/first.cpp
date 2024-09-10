#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

int main()
{
    // starically

    Node n1(10);
    Node *head = &n1;
    cout << n1.data << n1.next<<endl;
    Node n2(20);
    n1.next = &n2;
    cout<<n1.data<<endl<<n2.data;

    // Dynamically

    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    n3 -> next = n4;  //to connect


}
