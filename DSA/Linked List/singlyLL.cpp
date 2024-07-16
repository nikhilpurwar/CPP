#include<bits/stdc++.h>
using namespace std;
struct Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertNodeAtHead (Node* &head,int data)
{
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
}
void Print(Node* &head)
{
    if(head!=NULL)
    {
        cout<<head->data<<" ->";
        head=head->next;
        Print(head);
    }
}
int main()
{
    Node* head=NULL;
    int data;
    cin>>data;
    while(data!=-11)
    {
        cin>>data;
        insertNodeAtHead(head,data);
    }
    Print(head);
    return 0;
}