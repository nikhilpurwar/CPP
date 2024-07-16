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
        Node* left=NULL;
        Node* right=NULL;
    }
};
Node* sortedArrayToBST(int arr[], int s, int e)
{
    if(s>e) return NULL;
    int mid = (s+e)/2;
    Node*root = new Node(arr[mid]);

    root->left = sortedArrayToBST(arr,s,mid-1);
    root->right = sortedArrayToBST(arr, mid+1, e);
    return root;
}
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    return 0;
}