#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


struct node *root=NULL;

void Treecreate()
{
	struct node *p,*t;
	int x;
	struct queue q;
	create(&q,100);

	printf("Enter root value ");
	scanf("%d",&x);
	root=(struct node *)malloc (sizeof(struct node));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);

	while(!isEmpty(q))
	{
		p=dequeue(&q);
		printf("enter lef child of %d ",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
		}

		printf("enter right child of %d  ",p->data);
		scanf("%d",&x);
		if(x!=-1)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
	}
}

void preorder(struct node *p)
{
	if(p)
	{
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void postorder(struct node *p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d ",p->data);
	}
}

void inorder(struct node *p)
{
	if(p)
	{
		inorder(p->lchild);
		inorder("%d ",p->data);
		inorder(p->rchild);
	}
}


void levelorder(struct node *root)
{
	struct queue q;
	create(&q,100);

	printf("%d ",root->data);
	enqueue(&q,root);

	while(!isEmpty(q))
	{
		root=dequeue(&q);
		if(root->lchild)
		{
			printf("%d ",root->lchld->data);
			enqueue(&q,root->lchild);
		}
		if(root->rchild)
		{
			printf("%d ",root->rchild->data);
			equeue(&q,root->rchild);
		}
	}
}

int count(struct node *root)
{
	if(root)
		return count(root->lchild)+count(root->rchild)+1;
	return 0;
}

int height(struct node *root)
{
	int x=0,y=0;
	if(root==0)
		return 0;
	x=height(root->lchild);
	y=height(root->rchild);
	if(x>y)
		return x+1;
	else
		return y+1;
}



int main()
{
	Treecreate();
	preorder(root);

	return 0;
}

