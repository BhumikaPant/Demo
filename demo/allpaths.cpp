#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
};

int max(int num1,int num2)
{
	if(num1>num2)
	return num1;
	return num2;
	
}

void generatepath(int str[],Node *root,int present,int end)
{
	if(root==NULL)
	{	
		return ;
	}
	
	str[present]=root->data;
	if(root->left==NULL && root->right==NULL)
	{
		for(int i=0;i<=present;i++)
		cout<<str[i]<<" ";
		return;
	}
	
	
	generatepath(str,root->left,present+1,end);
	cout<<endl;
	generatepath(str,root->right,present+1,end);
	cout<<endl;
}

int main()
{
	Node *root=NULL;
	root=new Node();
	root->data=5;
	
	Node *temp=new Node();
	temp->data=15;
	
	root->left=temp;
	
	temp=new Node();
	temp->data=20;
	root->right=temp;
	
	temp=new Node();
	temp->data=13;
	root->right->left=temp;
	
	temp=new Node();
	temp->data=26;
	
	root->left->right=temp;
	
	temp=new Node();
	temp->data=12;
	root->left->left=temp;
	
	int str[6];
	
	//str[0]=root->data;	
	
	generatepath(str,root,0,6);
	cout<<endl;
//	generatepath(str,root->right,1,6);
	
}
