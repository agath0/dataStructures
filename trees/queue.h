#include <stdio.h>
#include <stdlib.h>

//>Circular queue
//Here array is made to be used in a circular fashion
//by using mode operations
//And F and R also moves through this array circularly
//
//Mode operation
//R = (R+1)%size   here % gives remainder
//0   (0+1)%7 = 1
//1   (1+1)%7 = 2
//2   (2+1)%7 = 3
//3   (3+1)%7 = 4
//4   (4+1)%7 = 5
//5   (5+1)%7 = 6
//6   (6+1)%7 = 0

#ifndef Queue_h
#define Queue_h

struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
};

struct queue
{
	int size;
	int front;//this is an index pointer
	int rear;//this is an index pointer
	node **a;//its a double pointer
		//Pointer to type arrays which is going
		//to store pointer of type nodes
};

void create(struct queue *p,int size)
{
	p->size=size;
	p->front=p->rear=0;
	p->a=(node **)malloc(p->size*sizeof(node *));
}


void enqueue(struct queue *p,node * x)
{

	if((p->rear+1)%p->size==p->front)
		printf("Queue is full you cant enter more\n");
	else
	{
		
		p->rear=(p->rear+1)%p->size;
		p->a[p->rear]=x;
	}
}

void display(struct queue p)
{

	int i=p.front+1;
	do
	{
		printf("%d ",p.a[i]);
		i=(i+1)%p.size;
	}while(i!=(p.rear+1)%p.size);
	
	printf("\n");
}

node * dequeue(struct queue *p)
{
	node * x=NULL;
	if(p->front==p->rear)
		printf("Queue is empty");
	else
	{
		p->front=(p->front+1)%p->size;
		x=p->a[p->front];
	}
	return x;
}

int isEmpty(struct queue q)
{
	return q.front==q.rear;
}

#endif /* Queue_h */
