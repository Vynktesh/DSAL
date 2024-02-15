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

int longestPath(Node* root)
{

	return 0;
}

int min(Node* root)
{

	return 0;
}

bool search(Node* root,int ele)
{

	return true;
}

void swap(Node* root)
{


}

int main()
{
	Node* root = new Node(10);
	Node* temp=NULL;
	
	temp=new Node(4);
	insertNode(root,temp);


	temp=new Node(3);
	insertNode(root,temp);
	
	
	temp=new Node(6);
	insertNode(root,temp);
	
	
	temp=new Node(9);
	insertNode(root,temp);
	
	
	temp=new Node(13);
	insertNode(root,temp);
	
	
	temp=new Node(5);
	insertNode(root,temp);
	
	
	temp=new Node(20);
	insertNode(root,temp);
	
	
	temp=new Node(12);
	insertNode(root,temp);

	inOrder(root);

}


