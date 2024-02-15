#include<iostream>
using namespace std;
/*

-Insert Node
-Numbers of node in longest path
-Minimum value found in tree
-search
-swap the left to right


*/
class Node
{
	public:
	int ele;
	Node* left;
	Node* right;
	
	Node(int ele)
	{
		this->ele = ele;
		left=NULL;
		right=NULL;
	}
		
};

void inOrder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	inOrder(root->left);
	cout<<root->ele<<" ";
	inOrder(root->right);
	
}

void insertNode(Node* root,Node* node)
{
	Node* temp=root;
	while(root!=NULL)
	{
		if(node->ele<root->ele)
		{
			temp=root;
			root=root->left;
		}
		else
		{
			temp=root;
			root=root->right;
		}
	}
	if(node->ele<temp->ele)
	{
		temp->left=node;
	}
	else
	{
		temp->right=node;
	}

}

int longestPath(Node* root,int level)
{

	if(root==NULL)
	{
		return level;
	}

	return max(longestPath(root->left,level+1),longestPath(root->right,level+1));
}

int min(Node* root)
{
	
	while(root->left!=NULL)
	{
		root=root->left;
	}
	
	return root->ele;
}

bool search(Node* root,int ele)
{

	while(root!=NULL)
	{
		if(root->ele==ele)
		{
			return true;
		}
		else if(root->ele<ele)
		{
			root=root->left;
		}
		else
		{
			root=root->right;
		}
	}
	return false;
}

void swap(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	swap(root->left);
	swap(root->right);
	
	Node * temp = root->left;
	root->left = root->right;
	root->right = temp;
	
	return;


}

int main()
{
	int len;
	cout<<"Enter how many elements you want to enter :";
	cin>>len;
	int ele;
	cin>>ele;
	Node* root = new Node(ele);
	for(int i=1;i<len;i++)
	{
		
		cin>>ele;
		insertNode(root,new Node(ele));
	}
	cout<<endl;
	inOrder(root);
	cout<<endl;
	
	swap(root);
	
	cout<<endl;
	inOrder(root);
	cout<<endl;
	
	
	
}


