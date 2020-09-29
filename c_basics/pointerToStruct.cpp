#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;


struct rectangle_stack
{
	int length;
	int breadth;
};

struct rectangle_heap
{
	int length;
	int breadth;
};

int main()
{
	struct rectangle_stack r={10,5};
		//this rectangle_stack is in stack
	struct rectangle_stack *ps=&r;//pointer takes 2 bytes
		//in every compiler pointer takes the 
		//same memory as int
	(*ps).length=29;//first method for accesing
			//struct using pointer
	ps->breadth=49;//second method using arrow
	cout<<r.length<<endl;
	cout<<r.breadth<<endl;


	//Creating an object dynameically in heap usin pointr
	//Creating dynamic rectangle_heap object
	struct rectangle_heap *ph;
	ph=(struct rectangle_heap*)malloc(sizeof(struct rectangle_heap));
	ph->length=100;//instead of (*ph).length in cpp
	ph->breadth=200;
	cout<<(*ph).length<<endl;
	cout<<(*ph).breadth<<endl;
}
