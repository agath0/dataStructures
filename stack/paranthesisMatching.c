//-Paranthesis Matching
//Check that for every opening bracket there is a closing bracket
//Working:whenever we find an opening bracket we push that
//	into the stack and move on ignoring any other
//	characters and when we find a closing bracket we pop
//	one opening bracket from inside the stack one at a time
//	and after reaching the end of our expression check if
//	our stack is empty and if empty that means the 
//	paranthesis are perfectly matched
//Case 1:we have extra closing bracket but stack is empty
//	so we are trying to pop out but the stack is empty
//	this is a situation where the above method wont
//	work properly
//
//examples:
//((a+b)*(c-d)) matching
//(((a+b)*(c-d)) not matching and will work with above method
//((a+b)*(c-d))) not matching and will not work with above method

#include <stdio.h>
#include <stdlib.h>

struct node
{
	char data;
	struct node *next;
};
struct node *top=NULL;


void push(char x)
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

char pop()
{
	struct node *temp;
	char x=-1;
	if(top==NULL)
		printf("Stack is Empty");
	else
	{
		temp=top;
		top=top->next;
		x=temp->data;
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


int isBalanced(char *x)
{
	int i;
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]=='(')
			push(x[i]);
		else if(x[i]==')')
		{
			if(top==NULL)
				return 0;
			pop();
		}
	}
	if(top==NULL)
		return 1;
	else
		return 0;
	//top becomes null when all the opening brackets
	//are poped out by the closing brackets

}




int main()
{	

	char *x="((a+b)*(c-d)";
	printf("%d \n",isBalanced(x));



	printf("%s \n",x);

	
	return 0;
}


