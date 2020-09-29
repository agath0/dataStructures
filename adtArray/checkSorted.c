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
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.a[i]);
	}
}

void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
//
//splitn is a fuction which putts all negative numbers
//to left and positive numbers to left

void splitpn(struct array *arr)
{
	int i=0;
       	int j=arr->length-1;
	while(i<j)
	{
		while(arr->a[i]<0){i++;}
		while(arr->a[j]>=0){j--;}
		if(i<j)
		{
			swap(&arr->a[i],&arr->a[j]);
		}
	}
}





int main()
{
	struct array arr={{-1,2,3,1,-6,2,-5,-3},14,8};
	
	splitpn(&arr);
	
	display(arr);
	return 0;
}

