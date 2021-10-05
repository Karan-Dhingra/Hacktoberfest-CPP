//Singly Linked List various operation
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	Node*next;
};
Node*Create_Linked_List(Node*head)
{
	int data;
	cout<<"Enter the data you want to insert:\t";
	cin>>data;
	Node*p=(Node*)malloc(sizeof(Node));	
	p->data=data;
	p->next=NULL;
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
void Print_Linked_List(Node*head)
{
	Node*p=head;
	while(p!=NULL)
	{
		cout<<"Element:\t"<<p->data<<"\n";
		p=p->next;
	}
}
Node*Insertion_At_Beginning(Node*head,int data)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	p->next=head;
	head=p;
	return head;
}
Node*Insertion_At_Index(Node*head,int data,int index)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	Node*ptr=head;
	int i=0;
	if(index==0)
	{
		head=Insertion_At_Beginning(head,data);
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
Node*Insertion_At_Last(Node*head,int data)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	Node*ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	p->next=ptr->next;
	ptr->next=p;
	return head;
}
Node*Insertion_At_Node(Node*head,int data,int N)
{
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=data;
	int i=1;
	Node*ptr=head;
	if(N==1)
	{
		head=Insertion_At_Beginning(head,data);
		return head;
	}
	else{
		while(i!=N-1)
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
	head=head->next;
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
	else
	{
		while(i!=index-1)
		{
			p=p->next;
		}
		Node*ptr=p->next;
		p->next=ptr->next;
		free(ptr);
		return head;
	}
}
Node*Deletion_At_Last(Node*head)
{
	Node*p=head;
	Node*ptr=head->next;
	while(ptr->next!=NULL)
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
	if(N==1)
	{
		head=Deletion_At_Beginning(head);
		return head;
	}
	else
	{
		while(i!=N-1)
		{
			p=p->next;
		}
		Node*ptr=p->next;
		p->next=ptr->next;
		free(ptr);
		return head;
	}
}
void Insertion_In_Singly_Linked_List(Node*head,int data)
{
	cout<<"Press 1 for Insertion at Beginning.\n";
	cout<<"Press 2 for Insertion at Index.\n";
	cout<<"Press 3 for Insertion at Last.\n";
	cout<<"Press 4 for Insertion after Node.\n";
	int ch;
	cout<<"Enter your choice:\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Linked List after insertion:\n";
			head=Insertion_At_Beginning(head,data);
			Print_Linked_List(head);
		break;
		case 2:
			int index;
			cout<<"Enter the index where you want to insert:\n";
			cin>>index;
			cout<<"Linked List after insertion:\n";
			head=Insertion_At_Index(head,data,index);
			Print_Linked_List(head);
		break;
		case 3:
			cout<<"Linked List after insertion:\n";
			head=Insertion_At_Last(head,data);
			Print_Linked_List(head);
		break;
		case 4:
			int N;
			cout<<"Enter after which Node you want to insert:\t";
			cin>>N;
			cout<<"Linked List after insertion:\n";
			head=Insertion_At_Node(head,data,N);
			Print_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice:\t";
		break;
	}
}
void Deletion_In_Singly_LInked_List(Node*head)
{
	cout<<"Press 1 for deletion at beginning.\n";
	cout<<"Press 2 for deletion at Index.\n";
	cout<<"Press 3 for deletion at Last.\n";
	cout<<"Press 4 for deletion after Node.\n";
	int ch;
	cout<<"Enter your choice:\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Linked List after deletion:\n";
			head=Deletion_At_Beginning(head);
			Print_Linked_List(head);
		break;
		case 2:
			int index;
			cout<<"Enter the index you want to delete:\n";
			cin>>index;
			cout<<"Linked List after deletion:\n";
			head=Deletion_At_Index(head,index);
			Print_Linked_List(head);
		break;
		case 3:
			cout<<"Linked List after deletion:\n";
			head=Deletion_At_Last(head);
			Print_Linked_List(head);
		break;
		case 4:
			int N;
			cout<<"Enter Node after which you want to delete:\n";
			cin>>N;
			cout<<"Linked List after deletion:\n";
			head=Deletion_At_Node(head,N);
			Print_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice.\n";
		break;
	}
}
Node*Reverse_Of_Linked_List(Node*head)
{
	Node*prevNode=NULL;
	Node*curNode=head, *nextNode=head;
	while(nextNode!=NULL)
	{
		nextNode=nextNode->next;
		curNode->next=prevNode;
		prevNode=curNode;
		curNode=nextNode;
	}
	head=prevNode;
	return head;
}
int main()
{
	int n,i;
	cout<<"Enter the number of nodes you want to linked: \t";
	cin>>n;
	Node*head=NULL;
	for(i=0;i<n;i++)
	{
		head=Create_Linked_List(head);
	}
	cout<<"Linked_List_Before_Any_Operation:\n";
	Print_Linked_List(head);
	cout<<"Press 1 for Insertion.\n";
	cout<<"Press 2 for Deletion.\n";
	cout<<"Press 3 for Reverse\n";
	int ch;
	cout<<"Enter your choice:\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
			int data;
			cout<<"Enter the data you want to insert:\t"<<"\n";
			cin>>data;
			Insertion_In_Singly_Linked_List(head,data);
		break;
		case 2:
			Deletion_In_Singly_LInked_List(head);
		break;
		case 3:
			cout<<"Reverse Linked List:\n";
			head=Reverse_Of_Linked_List(head);
			Print_Linked_List(head);
		break;
		default:
			cout<<"You have entered wrong choice:\n";
		break;
	}
	return 0;
}
