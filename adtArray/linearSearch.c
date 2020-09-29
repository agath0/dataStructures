#include <stdio.h>
#include <stdlib.h>

struct array
{ 
	int a[20];
	int size;
	int length;
};

void display(struct array arr)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.a[i]);
	printf("\n");
}

//simple linear search
int linearSearch(struct array arr,int key)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(key==arr.a[i])
			return i;
	}
	return -1;
}

//linear search with transposition or move to front
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int linearSearchFront(struct array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->a[i])
		{
			swap(&arr->a[i],&arr->a[i-1]);
			return i;
		}
	}
	return -1;
}

//linear search with transposition or move to head
int linearSearchHead(struct array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->a[i])
		{
			swap(&arr->a[i],&arr->a[0]);
			return i;
		}
	}
	return -1;
}

int main()
{
	struct array arr={{2,3,4,5,5},20,5};
	display(arr);



	printf("\nthe index of num is %d ",linearSearch(arr,4));
	display(arr);
	printf("\nthe index of num is %d ",linearSearchFront(&arr,4));
	display(arr);
	printf("\nthe index of num is %d ",linearSearchHead(&arr,4));
	display(arr);


	return 0;
}
