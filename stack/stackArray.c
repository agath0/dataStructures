#include <stdio.h>
#include <stdlib.h>


struct stack
{
	int size;
	int top;
	int *s;//for creating stack dynamically
	       //by dynamically we mean that the array can be 
	       //defined by the user according to his size
	       //specifications and it does not mean
	       //that the stack can dynamically increase in size
};

void create(struct stack *p)
{
	printf("Enter Size");
	scanf("%d",&p->size);
	p->top=-1;
	p->s=(int *)malloc(p->size*sizeof(int));
}

void push(struct stack *p,int x)
{
	if(p->top==p->size-1)
		printf("Stack Overflow \n");
	else
	{
		p->top++;
		p->s[p->top]=x;
	}
}



void display(struct stack p)
{
	int i;
	for(i=p.top;i>=0;i--)
		printf("%d ",p.s[i]);
	printf("\n");
}

int pop(struct stack *p)
{
	int x=-1;
	if(p->top==-1)
		printf("Stack Underflow\n");
	else
	{
		x=p->s[p->top--];
	}
	return x;
}

int peek(struct stack p,int index)
{
	//note while we are considering positions in stack
	//we take starting from 1 at the top and increasing 
	//as we go to the bottom
	int x=-1;
	if(p.top-index+1<0)
	{
		printf("Invalid index \n");
	  	return x;
	}
	x=p.s[p.top-index+1];
	return x;
	
}

int isEmpty(struct stack p)
{
	if(p.top==-1)
		return 1;
	return 0;
}

int isFull(struct stack p)
{
	return p.top==p.size-1;
}

int stackTop(struct stack p)
{
	if(!isEmpty(p))
		return p.s[p.top];
	return -1;
}




int main()
{
	struct stack sta;
	create(&sta);
	push(&sta,1);
	push(&sta,2);
	push(&sta,3);
	push(&sta,4);
	push(&sta,5);
	push(&sta,6);
	display(sta);
	printf("%d \n",pop(&sta));
	printf("%d \n",pop(&sta));
	printf("%d \n",pop(&sta));
	display(sta);
	printf("%d \n",peek(sta,1));
	printf("%d \n",peek(sta,4));
	printf("%d ",isEmpty(sta));
	printf("\n");
	printf("%d \n",isFull(sta));
	printf("%d \n",stackTop(sta));
}


