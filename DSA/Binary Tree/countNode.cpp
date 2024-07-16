#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data=val;
		right=NULL;
		left=NULL;
	}
};
void rightView(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		for(int i=0;i<q.size();i++)
		{
			Node* curr= q.front();
			q.pop();
			if(i==i-1)
			{
				cout<<curr->data<<" ";
			}
			else if(curr->left)
			{
				q.push(curr->left);
			}
			else if(curr->right)
			{
				q.push(curr->right);
			}
		}
	}
}

void leftView(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		for(int i=0;i<q.size();i++)
		{
			Node* curr= q.front();
			
			if(i==0)
			{
				cout<<curr->data<<" ";
			}
			q.pop();
			if(curr->left)
			{
				q.push(curr->left);
			}
			else if(curr->right)
			{
				q.push(curr->right);
			}
		}
	}
}
int sumOfChild(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return root->data+sumOfChild(root->left)+sumOfChild(root->right);
}
int heightofTree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(heightofTree(root->left),heightofTree(root->right))+1;
}
int sumOfNode(Node* root)
{
    int sum=0;
    if(root==NULL)
    {
        return 0;
    }
    return (root->data+sumOfNode(root->left)+sumOfNode(root->right));
}
int countNode(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return countNode(root->left)+countNode(root->right)+1;
}
int search(int inorder[],int start,int end,int curr)
{
	for(int i=start;i<=end;i++)
    {
	  if(inorder[i]==curr);
      {
		return i;	
	  }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end)
{
	static int idx=0;
	if(start>end){
		return NULL;
	}
	int curr= preorder[idx];
	idx++;
	Node* node=new Node(curr);
	if(start==end){
		return node;
	}
    int pos=search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
}
void inorder( Node* root){
	if(root==NULL){
	return ;	
	}
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	
}
int main()
{
	int preorder[]={1,2,4,3,5};
	int inorderArr []={4,2,1,5,3};
    Node*root=	buildTree( preorder,inorderArr,0,4);
    inorder(root);
    cout<<"\n"<<countNode(root)<<endl;
    cout<<sumOfNode(root)<<endl;
    cout<<heightofTree(root)<<endl;
	cout<<"Sum of child is ";
	cout<<sumOfChild(root)<<endl;
	cout<<"right view of tree "<<endl;
	rightView(root);

    return 0;
}