#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *first;


void create(int a[],int n)
{
	struct node *temp,*last;
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

int count(struct node *p)
{
	int n=0;
	while(p)
	{
		n++;
		p=p->next;
	}
	return n;
}


void insert(struct node *p,int index,int x)
{
	if(index<0 || index>count(p))
		return;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x; 
	if(index==0)
	{
		temp->next=first;
		first=temp;
		//NOTE :in this case we cannot use p 
		//which is passed on through the
		//insert fuction though the first
		//is passed to insert function and is
		//equated to node p,the fact is node p
		//on its own is not a materialistic node
		//created in memory spaced but its more
		//like a reference name and that name 
		//can move over from one memory location
		//to other based on the needs
		//But first is a global vaiable with it
		//materialistic memory location and its
		//own data , for making any changes to
		//first we need to use the first 
		//variable itself else , if we use p
		//instead for first in  making changes
		//to first it wont be affected instead 
		//p being a virtual node will change 
		//its data and pointers accordingly
		//but will not have any affect on 
		//first. 
		//****void insert(struct node *p,****
		//here p is a newly created node but
		//no memory is allocated to it inside
		//or outside the fuction so it is 
		//used as a naming apparatus which can
		//reference the first locaion or any
		//other locations accordingly.Just like
		//cases where we create nodes like
		//temp,last etc for operational 
		//purposes.Silmilarly p is also a 
		//node for operational purpose but note
		//that it wont help in making changes 
		//to already created memory locations
		//like first for that to happen you
		//must specifically use the name 
		//of that global location first and 
		//then make changes to first
		//
		//So p is a just like a slider over
		//the rheostat but not the actual
		//locations on the rheostat making
		//changes to p do not make changes
		//to actual location of the rheostat
	}
	else
	{
		for(int i=0;i<index-1 && p;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
	}
		
}
int main()
{
	int ar[]={1,5,2,4,6};
	create(ar,5);
	display(first);
	printf("\n");
	insert(first,5,999);
	insert(first,5,98899);
	insert(first,0,999);
	display(first);
}
	
