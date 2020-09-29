#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;



//Note: Array cannot be passed by value
//	Array can only by passed by address in c and cpp


void fuc(int a[],int n)
	//int a[] is passed by address
	//int n   is passed by value
	//Note: instead of using a[] we can use *a
	//which will be an integer pointer pointing to 
	//address of array,this pointer can point on any
	//integer, to be specific about arrays only you can
	//use a[]
{
	for(int i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
	a[1]=299;
	printf("a[0] is %d \n",a[0]);
	printf("a[1] is %d \n",a[1]);

};

int * farray(int n)
	//instead of [] we can use * also  
{
	int *p;
	p=(int *)malloc(n*sizeof(int));//malloc will alocate
			//the memory in heap 
	return(p);//ones the fuction ends its activation
		//record is deleted
};


int main()
{
	int a[5]={2,4,5,2,10};
	fuc(a,5);

	//how a function can return an array
	int *b;//this is the array
	b=farray(5);//b will be having the address of array
}
