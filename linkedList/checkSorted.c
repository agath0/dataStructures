#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *first=NULL;


void create(int a[],int n)
{
	struct node *last,*temp;
	first=(struct node *)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=a[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

		
void display(struct node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

int checkSorted(struct node *p)
{
	int x=-32768;
	while(p!=NULL)
	{
		if(p->data<x)
			return 0;
		x=p->data;
		p=p->next;
	}
	return 1;
}


int main()
{
	int ar[]={1,2,2,62,65};
	create(ar,5);
	display(first);
	printf("\n%d \n",checkSorted(first));
}

