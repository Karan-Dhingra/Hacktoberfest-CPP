#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void Preorder(Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"The Preorder traversal of binary tree is \n";
    Preorder(root);
}