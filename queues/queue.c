#include <stdio.h>
#include <stdlib.h>


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
	p->front=p->rear=-1;
	p->a=(int *)malloc(p->size*sizeof(int));
}


void enqueue(struct queue *p,int x)
{

	if(p->rear==p->size-1)
		printf("Queue is full");
	else
	{
		p->rear++;
		p->a[p->rear]=x;
	}
}

void display(struct queue p)
{
	for(int i=p.front+1;i<=p.rear;i++)
		printf("%d ",p.a[i]);
	printf("\n");

}

int dequeue(struct queue *p)
{
	int x=-1;
	if(p->front==p->rear)
		printf("Queue is empty");
	else
	{
		p->front++;
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


	display(q);

	printf("%d \n",dequeue(&q));


	display(q);


}
