#include <stdio.h>
#include <stdlib.h>

//merging can only be done on sorted arrays
//
//Here we need to create a new array containing 
//the combination of both arrays in sorted order

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
	printf("\n");
}

struct array* merge(struct array *ar1,struct array *ar2)
{
	int i,j,k;
	i=j=k=0;

	struct array *ar3=(struct array *)malloc(sizeof(struct array)); 
	while(i<ar1->length && j<ar2->length)
	{
		if(ar1->a[i]<ar2->a[j])
			ar3->a[k++]=ar1->a[i++];
		else
			ar3->a[k++]=ar2->a[j++];
	}
	for(;i<ar1->length;i++)
		ar3->a[k++]=ar1->a[i];
	for(;j<ar2->length;j++)
		ar3->a[k++]=ar2->a[j];
	ar3->length=ar1->length+ar2->length;
	ar3->size=ar1->length+ar2->length;

	return ar3;
}



int main()
{
	struct array ar1={{2,4,6,11,12,23},10,6};
	struct array ar2={{1,3,5,10,12,14},10,6};
	struct array *ar3;

	display(ar1);
	display(ar2);
	ar3=merge(&ar1,&ar2);

	display(*ar3);

	printf("\n");
	printf("new way with arr.a[i++] based  \n");
	for(int i=0;i<ar1.length;)
	{
		printf("%d  %d \n",i,ar1.a[i++]);
	}
	printf("index 0 %d ",ar1.a[0]);




	printf("\n the same other way with i++ on top \n");
	for(int i=0;i<ar1.length;)
	{
		i++; 
		printf("%d  %d \n",i,ar1.a[i]);
	}

	printf("index 0 %d ",ar1.a[0]);




	printf("\n the same other way with i++ on bottom \n");
	for(int i=0;i<ar1.length;)
	{
		printf("%d  %d \n",i,ar1.a[i]);
		i++; 
	}

	printf("index 0 %d ",ar1.a[0]);





	printf("\n the same other way with i++ normal way \n");
	for(int i=0;i<ar1.length;i++)
	{
		printf("%d  %d \n",i,ar1.a[i]);
	}

	printf("index 0 %d ",ar1.a[0]);



	return 0;


}


