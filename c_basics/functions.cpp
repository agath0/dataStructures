

//===Fuctions
//Is a group of related instructions which perform specific task
//Fuctions are called as modules or procedures
//Insted of writing a single main program we break main fuction
//into small manageble size pieces performing smaller and 
//repeating tasks.
//You can put the group of functions inside a library also
//
//===Modular or Procedural programming
//where we split main programm into small functions
//===Monolithic programming
//wher we write everything inside the main program
//
//Note: cpp follows object orientation where you group the
//related functions together and put them in a single class
//
#include <iostream>
using namespace std;


int add(int a,int b)//a,b are formal parameters
{
	int c;
	c=a+b;
	return(c);
}

int main()
{ 
	int x,y,z;//created inside stack
	x=10;
	y=5;
	//x,y are actual parameters
	z=add(x,y);//when add called, its created in stack
		//when add fuction finishes execution its 
		//activation record is deleted that is the 
		//memory used by add in stack is now free
	//Note: one funtion cannot access the variables
	//	of other fuction
	printf("sum is %d",z);
}

