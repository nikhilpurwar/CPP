#include<bits/stdc++.h>
using namespace std;
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
int kthMin(Node* root, int k)
{
    if(root==NULL)
    {
        return 0;
    }
    int count=0;
    if(count!=k)
    {
        count++;
        kthMin(root->left,k);
    }
    else if(k==count)
    {
        return root->data;
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
    int k;
    cin>>k;
    cout<<"kth element " <<kthMin(root,k);
    return 0;
}