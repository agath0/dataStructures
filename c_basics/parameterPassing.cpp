
//===Parameter Passing
//-Pass by value
//-Pass by address
//-Pass by reference(only in cpp)
//


#include <iostream>
using namespace std;

void swap_value(int x,int y)
{
	//Pass by value :any changes made in formal parameters 
	//		will not be reflected in actual parameters
 	//		use-when you need not modify actual values
 	//		   -if a fuction is returning some result
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void swap_address(int *x,int *y)
{
	//paass by address:address of actual parameters are passed
	//	to formal parameters and formal parameters must 
	//	be pointers, any changes made inside fuction
	//	will modify actual parameters
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void swap_reference(int &x,int &y)
{
	//paass by reference:the variables a and b are given 
	//alias as x and y, so x and y now is another name for
	//the value inside the variable a and b so the name 
	//refers to the same set of address of a and b
	//so no extra memory is consumed
	//Working:
	//when this function is called inside main fuction
	//the variabe a is also given name x and b as y and a
	//swap variable memory is allocated.And the swapping is
	//executed succesfully.But variable in one fuction 
	//cannot be other function so how is this possible, this
	//is because in call by reference no separate body of 
	//memory is allocated inside the stack for the 
	//swap_reference fuction instead the aliasing takes place
	//and temp variable is created inside the same memory
	//block created by the code section and after finishing
	//the fuction the temp is deleted
	//But its not addvisable to use pass by reference always
	//since even though the source code is procedural what
	//happens during execution is monolithic since the 
	//fuction code is put into the code section during
	//execution and then removed
	//So its advised not to use it with heavy fuctions
	//involving loops and all
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{

	int a,b;
	a=10;
	b=20;
	swap_value(a,b);
	printf("%d %d \n",a,b);//here a and b is not swapped
			//since used pass by value
	int aaa,bbb;
	aaa=10;
	bbb=20;
	swap_address(&aaa,&bbb);
	printf("%d %d \n",aaa,bbb);//here a and b is  swapped
			//since used pass by address
	int aa,bb; 
	aa=10;
	bb=20;
	swap_reference(aa,bb);
	printf("%d %d \n",aa,bb);//here a and b is not swapped
			//since used pass by value

	

}
