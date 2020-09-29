#include <stdio.h>
#include <stdlib.h>

struct array1
{ 
	int a[20];
	int size;
	int length;
};

struct array
{
	int *a;
	int size;
	int length;
};


void display(struct array1 arr1)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr1.length;i++)
		printf("%d ",arr1.a[i]);
}

void display(struct array arr)
{
	int i;
	printf("\n Elements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.a[i]);
}
int main()
{
	struct array1 arr1={{2,3,4,5,5},20,5};
	display(arr1);



	struct array arr;
	int n,i;
	int size;

	printf("Enter size of an array");
	scanf("%d",&arr.size);

	arr.a=(int *)malloc(arr.size*sizeof(int));

	printf("Enter number of numbers");
	scanf("%d",&n);

	arr.length=n;

	printf("Enter alll elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr.a[i]);


	display(arr);
	



	return 0;
}
