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

struct node * searchNode(struct node *p,int x)
//Linear Search
{
	while(p)
	{
		if(p->data==x)
			return p;
		p=p->next;
	}
	return 0;
}

struct node * searchRecursive(struct node *p,int x)
{
	
	if(p==NULL)
		return NULL;
	if(p->data==x)
		return p;
	return searchRecursive(p->next,x);
}


struct node * searchMTF(struct node *p,int x)
//Move To Front
{
	int n=0;
	struct node *tmp;
	while(p)
	{
		n++;
		if(x==p->data)
		{
			if(n==1)
			{
				return p;
				//n==1 is a special condition where
				//the program will get overflowed and
				//will undergo contious printing of
				//valuse if not handled by and if 
				//loop.And by basic logic if the 
				//search input is present at the 
				//first place itself there is no need
				//for any modification using MTF 
				//so we return the the pointer and
				//not perform any MTF
			}
			tmp->next=p->next;
			first=p;
			return p;
		}
		tmp=p;
		p=p->next;
	}
	return 0;
}



int main()
{
	int ar[]={1,3,6,2,5};
	create(ar,5);
	printf("\n%d \n",first);
	printf("\n%d \n",first->next);
	printf("\n%d \n",first->data);
	display(first);
	printf("\n%d \n",searchNode(first,1));
	printf("\n%d \n",searchRecursive(first,1));
	printf("\n%d \n",searchMTF(first,1));
	display(first);
}
