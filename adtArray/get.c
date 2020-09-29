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


int get(struct array arr,int index)
{
	if(index>=0 && index<arr.length)
		return arr.a[index];
	return -1;
}

int set(struct array *arr,int index,int x)
{
	if(index>=0 && index<arr->length)
		arr->a[index]=x;

	return 0;
}

int max(struct array arr)
{
	int max=arr.a[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
		if(arr.a[i]>max)
			max=arr.a[i];
	}
	return max;
}

int min(struct array arr)
{
	int min=arr.a[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
		if(arr.a[i]<min)
			min=arr.a[i];
	}
	return min;
}
 	
int sum(struct array arr)
{
	int s=0;
	int i;
	for(i=0;i<arr.length;i++)
		s+=arr.a[i];
	return s;
}

float avg(struct array arr)
{
	return (float)sum(arr)/arr.length;
}

int main()
{
	struct array arr={{2,3,4,5,6},20,5};
	display(arr);
	printf("\n %d \n",get(arr,3));
	printf("\n %d \n",set(&arr,3,100));
	display(arr);
	printf("\n %d \n",sum(arr));
	printf("\n %d \n",min(arr));
	printf("\n %d \n",max(arr));
	printf("\n %f \n",avg(arr));

	return 0;
}
