#include <iostream>
using namespace std;


//recursion is a function that calls itself
//
//In a recursion fuction call if there is anything
//before the recusion fuction its executed at the 
//calling time if anything after the rucursion 
//fuction its executed at the returning time
//
//Note :a loop will only have ascending face but
//	recursion will have both ascending and
//	descending face
//
//**Tracing tree of recursive fucntion
//**Recurence Relation
//**Solving Recurence realtion using
//  induction method(successive substitution method)
//

void fun1(int n)
{
	if(n>0)
	{
		printf("%d \n",n);
		fun1(n-1);
	}
}

void fun2(int n)
{
	if(n>0)
	{ 
		fun2(n-1);
		printf("%d \n",n);
	}
}

int main()
{
	int x=3;
	printf("fun1 \n");
	fun1(x);
	printf("fun2 \n");
	fun2(x);
}
