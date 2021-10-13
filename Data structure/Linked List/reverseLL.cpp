//You have been given a singly linked list of integers. Write a function to print the list in a reverse order

#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void printReverse(Node *head)
{
    //Write your code here
    if( head == NULL)
        return;
    printReverse(head->next);
    cout<<head->data<<" ";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{