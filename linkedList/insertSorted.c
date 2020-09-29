
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *sorted=NULL;



void create(int a[],int n)
{

	struct node *t,*last;
	sorted=(struct node *)malloc(sizeof(struct node));
	sorted->data=a[0];
	sorted->next=NULL;
	last=sorted;

	for(int i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	printf("\n");
}


void display(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}



void insertSortd(int x)
{
	struct node *p,*q,*t;
	p=sorted;
	q=NULL;
	if(sorted==NULL)
		sorted=t;
	else
	{
		while(p && p->data<x)
		{
			q=p;
			p=p->next;
		}
		t=(struct node *)malloc(sizeof(struct node));
		if(p==sorted)
		{
			t->data=x;
			t->next=sorted;
			sorted=t;
		}
		else
		{
			t->data=x;
			t->next=q->next;
			q->next=t;
		}
	}
}


int main()
{
	int ar[]={1,3,6,41,190};
	create(ar,5);
	display(sorted);
	insertSortd(50);
	insertSortd(4);
	insertSortd(0);
	display(sorted);
}

