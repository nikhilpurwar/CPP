#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        Node* left= NULL;
        Node*right=NULL;
    }
};
Node* insertNode(Node* root,int data)
{
    if(root==NULL)
    {
        root = new Node(data);
        return root;
    }
}
int main()
{
    return 0;
}