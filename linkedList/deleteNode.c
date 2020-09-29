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
	struct node *t,*last;
	first=(struct node *)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
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

int count(struct node *p)
{
	int n=0;
	while(p!=NULL)
	{
		n++;
		p=p->next;
	}
	return n;
}


		
int Delete(struct node *p,int index)
{
	int x=-1;
	if(index <1 || index>count(p))
		return -1;
	struct node *q;
	if(index==1)
	{
		q=first;
		x=first->data;
		first=first->next;
		free(q);
		return x;
	}
	else
	{
		for(int i=0;i<index-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		free(p);
		return x;
	}
		
}
			
	

int main()
{
	int ar[]={2,1,5,4,6};
	create(ar,5);
	display(first);
	printf("%d \n",count(first));
	Delete(first,4);
	display(first);
}
