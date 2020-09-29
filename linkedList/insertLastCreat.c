#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};
struct node *first;


void insertLastCreat(int x)
{
	struct node *temp,*last;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(first==NULL)
		first=last=temp;
	else
	{
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

int main()
{
	insertLastCreat(99);
	insertLastCreat(19);
	insertLastCreat(19);
	insertLastCreat(19);
	display(first);
}

