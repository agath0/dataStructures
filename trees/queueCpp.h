#include <iostream>
using namespace std;

#include<stdio.h>
#ifndef QueueCpp_h
#define QueueCpp_h

class Node
{
	public:
		Node *lchild;
		int data;
		Node *rchild;
};


class Queue
{
private:
	int front;
	int rear;
	int size;
	Node **a;
public:
	Queue(){front=rear=-1;size=10;a=new Node*[size];}
	Queue(int size){front=rear=-1;this->size=size;a=new Node*[this->size];}
	void enqueue(Node *x);
	Node* dequeue();
	int isEmpty(){return front==rear;}
	void display();
};

void Queue::enqueue(Node *x)
{
	if(rear==size-1)
		printf("Queue is full \n");
	else
	{
		rear++;
		a[rear]=x;
	}
}

Node* Queue::dequeue()
{
	Node *x=NULL;
	if(front==rear)
		printf("queue is empty \n");
	else
	{
		x=a[front+1];
		front++;
	}
	return x;
}


void Queue::display()
{
	for(int i=front+1;i<=rear;i++)
		printf("%d ",a[i]);
	printf("\n");
}

#endif /* Queue_h */
