#include <iostream>
using namespace std;

//static vaiables are created inside code section
//in a subsection of code section called a section for
//global and static variables
//
//The static variable is not created everytime the fuction
//is called, its created only one time thats at the loading
//time of a program
//So static x will not have multiple copies like n in the
//below program
//
int fun1(int n)
{
	if (n>0)
	{
		printf("%d \n",n);
		int a=fun1(n-1)+n;
		printf("%d \n",a);
		return a;
	}
	return 0;
}

int fun2(int n)
{
	static int x=0;
	if (n>0)
	{
		x++;
		printf("%d \n",x);
		int a=fun2(n-1)+x;
		printf("%d \n",a);
		return a;
	}
	return 0;
}


int g=0; //global
int fun3(int n)
{
	if (n>0)
	{
		g++;
		printf("%d \n",g);
		int a=fun3(n-1)+g;
		printf("%d \n",a);
		return a;
	}
	return 0;
}



int main()
{
	int a=5;
	printf("%d \n",fun1(a));
	printf("%d \n",fun2(a));
	printf("%d \n",fun3(a));
}
