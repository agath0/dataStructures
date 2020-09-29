#include <stdio.h>
#include <stdlib.h>

//Binary Search
//
//
//the prerequisite od the condition is that the
//list of keys of the elements must be sorted
//
//It will always search for a key element in the 
//middle of a sorted list and will split the list into tw
//
//



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

//simple binary search usin loop
int binarySearchLoop(struct array arr,int key)
{
	int i,mid,h;
	int l=0;
	h=arr.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.a[mid])
			return mid;
		else if(key<arr.a[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}


//simple binary search usin recursion
int binarySearchRecursive(int a[],int l,int h,int key)
{
	h-=1;
	int mid;
	if(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return binarySearchRecursive(a,l,mid-1,key);
		else
			return binarySearchRecursive(a,mid+1,h,key);
	}
	return -1;
}

int main()
{
	struct array arr={{2,3,4,5,6},20,5};
	display(arr);



	printf("\nthe index of num is %d ",binarySearchLoop(arr,4));
	display(arr);
	printf("\nthe index of num is %d ",binarySearchRecursive(arr.a,0,arr.length,4));
	display(arr);

	int z=3;
	z=z/2;
	printf("%d \n",z);

	return 0;
}
