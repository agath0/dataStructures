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

struct queue
{
	int size;
	int front;//this is an index pointer
	int rear;//this is an index pointer
	int *a;
};

void create(struct queue *p,int size)
{
	p->size=size;
	p->front=p->rear=0;
	p->a=(int *)malloc(p->size*sizeof(int));
}


void enqueue(struct queue *p,int x)
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

int dequeue(struct queue *p)
{
	int x=-1;
	if(p->front==p->rear)
		printf("Queue is empty");
	else
	{
		p->front=(p->front+1)%p->size;
		x=p->a[p->front];
	}
	return x;
}


int main()
{
	struct queue q;
	create(&q,6);
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,999);
	enqueue(&q,1999);


	display(q);

	printf("%d \n",dequeue(&q));
	display(q);

	enqueue(&q,1999);
	display(q);




}
