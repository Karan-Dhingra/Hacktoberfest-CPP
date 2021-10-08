//Circular Linked List Various Operations
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	Node*next;
};
Node* Create_Circular_Linked_List(Node*head)
{
	int data;
	cout<<"Enter the data of Node:\n";
	cin>>data;
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=head;
	Node*ptr;
	if(head==NULL)
	{
		head=p;
		ptr=head;
		return head;
	}
	else
	{
		ptr->next=p;
		ptr=p;
		return head;
	}
}
void Print_Circular_Linked_List(Node*head)
{
	Node*p=head;
	do{
		cout<<"Element is:\t"<<p->data<<"\n";
		p=p->next;
	}while(p!=head);
}
Node*Insertion_AT_Beginning(Node*head,int data)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=head;
	Node*ptr=head;
	do{
		ptr=ptr->next;
	}while(ptr->next!=head);
	head=p;
	ptr->next=head;
	return head;	
}
Node*Insertion_AT_Index(Node*head,int data,int index)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	Node*ptr=head;
	int i=0;
	if(index==0)
	{
		head=Insertion_AT_Beginning(head,data);
		return head;
	}
	else
	{
		while(i!=index-1)
		{
			ptr=ptr->next;
			i++;
		}
		p->next=ptr->next;
		ptr->next=p;
		return head;
	}	
}
Node*Insertion_AT_Last(Node*head,int data)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	Node*ptr=head;
	do{
		ptr=ptr->next;
	}while(ptr->next!=head);
	p->next=ptr->next;
	ptr->next=p;
	return head;
}
Node*Insertion_AT_Node(Node*head,int data,int node)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	Node*ptr=head;
	int i=1;
	if(node==1)
	{
		head=Insertion_AT_Beginning(head,data);
		return head;
	}
	else
	{
		while(i!=node-1)
		{
			ptr=ptr->next;
			i++;
		}
		p->next=ptr->next;
		ptr->next=p;
		return head;
	}
}
Node*Deletion_At_Beginning(Node*head)
{
	Node*p=head;
	Node*ptr=head;
	do{
		ptr=ptr->next;
	}while(ptr->next!=head);	
	head=head->next;
	ptr->next=head;
	free(p);
	return head;
}
Node*Deletion_At_Index(Node*head,int index)
{
	Node*p=head;
	int i=0;
	if(index==0)
	{
		head=Deletion_At_Beginning(head);
		return head;
	}
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	Node*ptr=p->next;
	p->next=ptr->next;
	free(ptr);
	return head;	
}
Node*Deletion_At_Last(Node*head)
{
	Node*p=head;
	Node*ptr=head->next;
	while(ptr->next!=head)
	{
		p=p->next;
		ptr=ptr->next;
	}
	p->next=ptr->next;
	free(ptr);
	return head;
}
Node*Deletion_At_Node(Node*head,int N)
{
	Node*p=head;
	int i=1;
	while(i!=N-1)
	{
		p=p->next;
		i++;
	}
	Node*ptr=p->next;
	p->next=ptr->next;
	free(ptr);
	return head;
}
void Insertion_In_Circular_Linked_List(Node*head,int data)
{
	cout<<"Press 1 for Insertion At Beginning.\n";
	cout<<"Press 2 for Insertion At Index.\n";
	cout<<"Press 3 for Insertion At Last.\n";
	cout<<"Press 4 for Insertion At Node.\n";
	int ch;
	cout<<"Enter your choice:\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Circular Linked List After Insertion:\n";
			head=Insertion_AT_Beginning(head,data);
			Print_Circular_Linked_List(head);
		break;
		case 2:
			int index;
			cout<<"Enter the index you want to insert:\n";
			cin>>index;
			cout<<"Circular Linked List After Insertion:\n";
			head=Insertion_AT_Index(head,data,index);
			Print_Circular_Linked_List(head);
		break;
		case 3:
			cout<<"Circular Linked List After Insertion:\n";
			head=Insertion_AT_Last(head,data);
			Print_Circular_Linked_List(head);
		break;
		case 4:
			int N;
			cout<<"Enter the Node you want to Insert:\n";
			cin>>N;
			cout<<"Circular Linked List After Insertion:\n";
			head=Insertion_AT_Node(head,data,N);
			Print_Circular_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice.";
		break;
	}
}
void Deletion_In_Circular_Linked_List(Node*head)
{
	cout<<"Press 1 for Deletion at Beginning.\n";
	cout<<"Press 2 for Deletion at Index.\n";
	cout<<"Press 3 for Deletion at Last.\n";
	cout<<"Press 4 for Deletion at Node.\n";
	int ch;
	cout<<"Enter your choice:\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Circular Linked List After Deletion:\n";
			head=Deletion_At_Beginning(head);
			Print_Circular_Linked_List(head);
		break;
		case 2:
			int index;
			cout<<"Enter the index you want to delete:\n";
			cin>>index;
			cout<<"Circular Linked List After Deletion:\n";
			head=Deletion_At_Index(head,index);
			Print_Circular_Linked_List(head);
		break;
		case 3:
			cout<<"Circular Linked List After Deletion:\n";
			head=Deletion_At_Last(head);
			Print_Circular_Linked_List(head);
		break;
		case 4:
			int N;
			cout<<"Enter the node you want to delete:\n";
			cin>>N;
			cout<<"Circular Linked List After Deletion:\n";
			head=Deletion_At_Node(head,N);
			Print_Circular_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice.\n";
		break;
	}
}
Node* Reverse_Of_Circular_Linked_list(Node*head)
{
	Node*prevNode=head;
	Node*p=head;
	Node*curNode=head,*nextNode=head;
	do{
		nextNode=nextNode->next;
		curNode->next=prevNode;
		prevNode=curNode;
		curNode=nextNode;
	}while(nextNode!=head);
	do{
		p=p->next;
	}while(p->next!=head);
	head=prevNode;
	p->next=head;
	return head;
}
int main()
{
	int n,i;
	cout<<"Enter the number of nodes you want in linked list:\t";
	cin>>n;
	Node*head=NULL;
	for(i=0;i<n;i++)
	{
		head=Create_Circular_Linked_List(head);
	}
	cout<<"Circular linked list before any operation:\n";
	Print_Circular_Linked_List(head);	
	cout<<"Press 1 for Insertion.\n";
	cout<<"Press 2 for Deletion.\n";
	cout<<"Press 3 for Reverse.\n";
	int ch;
	cout<<"Enter your choice:\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
			int data;
			cout<<"Enter the data you want insert:\n";
			cin>>data;
			Insertion_In_Circular_Linked_List(head,data);
		break;
		case 2:
			Deletion_In_Circular_Linked_List(head);
		break;
		case 3:
			cout<<"Reverse of Circular Linked List:\n";
			head=Reverse_Of_Circular_Linked_list(head);
			Print_Circular_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice.";
		break;
	}
	return 0;
}
