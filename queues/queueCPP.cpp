#include <iostream>
using namespace std;


class queue
{
private:
	int front;
	int rear;
	int size;
	int *a;
public:
	queue(){front=rear=-1;size=10;a=new int[size];}
	queue(int size){front=rear=-1;this->size=size;a=new int[this->size];}
	void enqueue(int x);
	int dequeue();
	void display();
};

void queue::enqueue(int x)
{
	if(rear==size-1)
		printf("Queue is full \n");
	else
	{
		rear++;
		a[rear]=x;
	}
}

int queue::dequeue()
{
	int x=-1;
	if(front==rear)
		printf("queue is empty \n");
	else
	{
		x=a[front+1];
		front++;
	}
	return x;
}


void queue::display()
{
	for(int i=front+1;i<=rear;i++)
		printf("%d ",a[i]);
	printf("\n");
}


int main()
{
	queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.display();
	printf("%d \n",q.dequeue());
	q.display();
	return 0;

}


