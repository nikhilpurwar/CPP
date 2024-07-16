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
        this->left=NULL;
        this->right=NULL;
    }
    
};
void insertNode(Node* &root,int data)
{
    if(root==NULL)
    {
        root= new Node(data);
    }
    if(data<root->data)
    {
        insertNode(root->left,data);
    }
    if(data>root->data)
    {
        insertNode(root->right,data);
    }
}
void printTree(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}
void searchElement(Node* root,int key)
{
    if(root==NULL) return;
    if(root->data==key)
    {
        cout<<"key found!!";
    }
    else
    {
        cout<<"key not found!!";
    }
    if(key<root->data)
    {
        searchElement(root->left,key);
    }
    if(key>root->data)
    {
        searchElement(root->right,key);
    }
}
int main()
{
    struct Node* root=NULL;
    insertNode(root,4);
    insertNode(root,13);
    insertNode(root,6);
    insertNode(root,1);
    insertNode(root,3);
    insertNode(root,12);
    insertNode(root,2);
    insertNode(root,-4);
    insertNode(root,9);
    printTree(root);
    int key;
    cout<<"enter value to search ";
    cin>>key;
    searchElement(root,key);
    return 0;
}