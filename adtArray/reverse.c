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
	printf("\n elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.a[i]);
	printf("\n");
}

//Reversing an array
//--using an auxillary array

void reverse(struct array *arr)
{
	int i,j=arr->length;
	int ax[arr->length]; 
	
	for(i=0;i<arr->length;i++)
	{
		j--;
		ax[j]=arr->a[i];
	}
	
	for(i=0;i<arr->length;i++)
	{
		arr->a[i]=ax[i];
	}
	
}
//reversing using auxillary array created in heap

void reverseHeap(struct array *arr)
{ 
	int *b;
	int i,j;
	b=(int *)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
		b[j]=arr->a[i];
	for(i=0;i>arr->length;i++)
		arr->a[i]=b[i];

	delete b;
}


//Reversing an array
//--using swaping from both sides
void reverseSwap(struct array *arr)
{
	int j=arr->length;
	for(int i=0;i<=arr->length;i++)
	{
		j--;
		int temp;
		temp=arr->a[i];
		arr->a[i]=arr->a[j];
		arr->a[j]=temp;
	}
}



//reversing an array using swwap same technique
//
void swap(int *x,int *y)
{
	int temp; 
	temp=*x;
	*x=*y;
	*y=temp;
}
void reverseSwap1(struct array *arr)
{
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->a[i],&arr->a[i]);
	}

}

 
int main()
{
	struct array arr={{2,3,4,5,6,1,22,55},20,8};
	display(arr);

	reverse(&arr);
	display(arr);

	reverseSwap(&arr);
	display(arr);
	
	reverseHeap(&arr);
	display(arr);
	
	reverseSwap1(&arr);
	display(arr);
	return 0;
}
