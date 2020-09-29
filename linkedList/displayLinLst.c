
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *first=NULL;
struct node *firstc=NULL;
struct node *first1=NULL;
struct node *first2=NULL;
	    //first becomes a global pointer it can be
	    //directly accessed or can be passed as a
	    //parameter





void create(int a[],int n)
{

	struct node *t,*last;
	first=(struct node *)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;

	for(int i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	printf("\n");
}

void create1(int a[],int n)
{

	struct node *t,*last;
	firstc=(struct node *)malloc(sizeof(struct node));
	firstc->data=a[0];
	firstc->next=NULL;
	last=firstc;

	for(int i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}



void display(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

void display1(struct node *y)
{
	while(y!=NULL)
	{
		printf("%d %d \n",y->data,y->next);
		y=y->next;
	}
	printf("\n");
}


void displayRecusive(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		displayRecusive(p->next);
	}
}
void displayRecusiveRevers(struct node *p)
{
	if(p!=NULL)
	{
		displayRecusiveRevers(p->next);
		printf("%d ",p->data);
	}
}


int count(struct node *p)
{
	int c=0;
	while(p!=0)
	{
		c++;
		p=p->next;
	}
	return c;
}
int countRecursive(struct node *p)
{
	if(p==0)
		return 0;
	else
		return countRecursive(p->next)+1;
}


int sum(struct node *p)
{
	int sum=0;
	while(p)
	{
		sum=sum+p->data;
		p=p->next;
	}
	return sum;
}

int sumRecursive(struct node *p)
{
	if(p)
		return sumRecursive(p->next)+p->data;
	else
		return 0;
}


int max(struct node *p)
{
	int m=-32768;//this is the most minimum integer
			//considering 2 byte integer
	while(p)
	{
		if(p->data>m)
			m=p->data;
		p=p->next;
	}
	return m;
}

int maxRecursive(struct node *p)
{
	int x=0;
	if(p)
	{
		x=maxRecursive(p->next);
		if(x>p->data)
			return x;
		else
			return p->data;
	}
	else
		return -32768;
}

int maxRecursive1(struct node *p)
{
	int x=0;
	if(p==0)
		return -32768;
	x=maxRecursive(p->next);
	return x>p->data?x:p->data;
}


struct node * search(struct node *p,int key)
{
	while(p!=NULL)
	{
		if(key==p->data)
			return p;
		p=p->next;
	}
	return NULL;
}

struct node * searchRecursive(struct node *p,int key)
{
	if(p==NULL)
		return NULL;
	if(key==p->data)
		return p;
	return searchRecursive(p->next,key);
}



//Improving search using
//-Transposition
//-Move to head(MTH)
//
struct node * searchMTH(struct node *p,int key)
{
	 struct node *q=NULL;
	 while(p!=NULL)
	 {
		 if(key==p->data)
		 {
			 q->next=p->next;
			 p->next=first;
			 first=p;
	 		 return p;
		 }
		 q=p;
		 p=p->next;
	 }
	 return 0;
}


void insert(int pos,int x)
{
	node *t,*p;
	if(pos==0)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1 && p;i++)
			p=p->next;
		if(p)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->next=p->next;
			p->next=t;
		}
	}
}
	
			
void insert1(int pos,int x)
{
	node *t,*p;
	if(pos==0)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		t->next=first1;
		first1=t;
	}
	else if(pos>0)
	{
		p=first1;
		for(int i=0;i<pos-1 && p;i++)
			p=p->next;
		if(p)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->next=p->next;
			p->next=t;
		}
	}
}

void insertStruct(struct node *m,int pos,int x)
{
	node *t,*p;
	if(pos==0)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		t->next=m;
		m=t;
	}
	else if(pos>0)
	{
		p=m;
		for(int i=0;i<pos-1 && p;i++)
			p=p->next;
		if(p)
		{
			t=(struct node *)malloc(sizeof(struct node));
			t->data=x;
			t->next=p->next;
			p->next=t;
		}
	}
}
	
	
	
int main()
{
	int a[]={9,5,1,6,2};
	create(a,5);



	display(first);
	display1(first);

	displayRecusive(first);
	printf("\n");
	displayRecusiveRevers(first);
	printf("\n");

	printf("count is %d \n",count(first));
	printf("count is %d \n",countRecursive(first));
	printf("sum is %d \n",sum(first));
	printf("sum is %d \n",sumRecursive(first));
	printf("max is %d \n",max(first));
	printf("max is %d \n",maxRecursive(first));
	printf("max is %d \n",maxRecursive1(first));
	printf("search 1 is %d \n",search(first,1));
	printf("search 9 is %d \n",search(first,9));
	printf("search 1 is %d \n",searchRecursive(first,1));
	printf("search 1 is %d \n",searchMTH(first,1));
	insert(2,99);
	insert(0,99);
	insert(2,99);
	display(first);

	int b[]={22,1,4,4,112};  
	for(int i=0;i<5;i++)
	{
		insert1(i,b[i]);
	}	
	
	display(first1);

	int c[]={32,9,4,4,992};  

	for(int j=0;j<5;j++)
	{
		insertStruct(first2,j,c[j]);
	}	
	
	//display(first2);
	
	create1(c,5);
	display(firstc);

	return 0;
}
