#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
	
} ;
void main()
{
	int i;
struct node* head=NULL;
struct node* nw;
struct node* temp;
struct node* temp1;
int count=1;
for (i=1;i<=6;i++)
{
	temp= (struct node*) malloc (sizeof(struct node));
	if(head==NULL)
	{
		temp->data=count;
		count++;
		temp->prev=NULL;
		temp->next=NULL;
		
	}
	else
	{
		temp->data=count;
		count++;
		temp->prev=NULL;
		temp->next=head;
	}
}
}

