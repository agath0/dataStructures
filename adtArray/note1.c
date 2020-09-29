
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
}
void display1(struct array arr)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.a[i]);
}
void display2(struct array arr)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.a[i]);
}





void append(struct array *arr,int x)
{
	if(arr->length<arr->size)
		arr->a[arr->length++]=x;
}

void append1(struct array *arr,int x)
{
	if(arr->length<arr->size)
		(arr->length)++;
		arr->a[arr->length]=x;
}

void append2(struct array *arr,int x)
{
	if(arr->length<arr->size)
		arr->a[arr->length++]=x;
		arr->length++;
}

void insert(struct array *arr,int index,int x)
{
	int i;
	if(index>=0 && index<=arr->length)
	{
		for(i=arr->length;i>index;i--)
			arr->a[i]=arr->a[i-1];
		arr->a[index]=x;
		arr->length++;
	}

}

int del(struct array *arr,int index)
{
	int x=0;
	int i;
	if(index>=0 && index<arr->length)
	{
		x=arr->a[index];
		for(i=index;i<arr->length-1;i++)
			arr->a[i]=arr->a[i+1];
		arr->length--;
		return x;
	}
	return 0; 
}



int main()
{
	struct array arr={{1,2,3,4,5,6},20,6};
	display(arr);
	append(&arr,899);
	display(arr);
	//insert(&arr,4,10);
	//display(arr);
	//insert(&arr,0,10);
	//display(arr);
	//append(&arr,888);
	//display(arr);
	//del(&arr,4);
	//display(arr);





	
	return 0;
}
