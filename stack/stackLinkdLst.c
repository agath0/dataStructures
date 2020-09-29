#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

struct node *top=NULL;
//here we need a top pointer which is taken
//as a global variable and we initialize it
//as NULL.
//NOTE: We can even declare it inside main
//function and pass it as parameter to the
//function otherwise taking it as global
//we can go for taking it as global only if
//we have just one stack in our program.
//But this is not recommende we should have
//a pointer inside the main function and it
//should pass it as parameter to the other
//functions


void push(int x)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));

	if(temp==NULL)
		printf("stack is full \n");
	else
	{
		temp->data=x;
		temp->next=top;
		top=temp;
	}
}

int pop()
{
	struct node *temp;
	int x=-1;
	if(top==NULL)
		printf("Stack is empty \n");
	else
	{
		x=top->data;
		temp=top;
		top=top->next;
		free(temp);
	}
	return x;

}

void display()
{
	struct node *p;
	p=top;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int isEmpty()
{
	//NOTE:top is a node which acts like a slider above
	//the reheostat and no node is created in the heap
	//under the name top and so top acts like a
	//pointer and its value is initially initialized
	//to NULL at the start of this program.And as we
	//start to push more node into the stack the top
	//pointer point on to the newly created temp nodes
	//and so will not be NULL.For each push a new node
	//is created and this is folllowed by top pointer
	//moving on to pointing to the new node created
	//
	struct node;
	if(top==NULL)
		return 1;
	else
		return 0;
}


int isFilled()
{
	//NOTE:a stack which is defined using linked list 
	//is said to be filled only when there no more
	//space to add new nodes(where us in arrays
	//the stack was said to be filled when the array
	//got filled)
	//And in linked list a situation where we cannot
	//add any more nodes occur when heap memory 
	//do not have any more space
	//And such a situation can be identifid when
	//we try to create a new node for example here
	//temp inside heap and it cannot be created since
	//no space and it will remain NULL
	//so we find if temp==NULL
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
		return 1;
	else
		return 0;
}

int main()
{
	push(10);
	push(20);
	push(30);
	display();

	printf("%d \n",pop());
	printf("%d \n",pop());
	printf("%d \n",pop());
	printf("%d \n",pop());
	printf("%d \n",isEmpty());
	printf("%d \n",isFilled());

	
	return 0;
}



