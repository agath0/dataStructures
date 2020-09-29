//Types of Recursion
//
//==Tail recursion
//==Head recursion
//==Tree recursion
//==Indirect recursion
//==Nested recursion
//
//

//Tail Recursion
//-if a recursive function is calling itself and that
//that recursive call is the last statement in a fuction
//-So everything is performed at calling time only	


//Comparing tail recursion with loops
//-time taken by both of them is order of n  O(n)
//-recursive function internally utlises stack
//for the given value of n it will create n activation records
//-so for recursive function space taken is O(n)
//-for loop function only one activation record is created
//-so for loop space complexity is O(1)
//
//Note: So in case of tail recursion loop is efficient
//and in some compilers it automatically checks if we have
//written any tail recursion and convert it to loop


#include <iostream>
using namespace std;

void fun1(int n)
{
	while(n>0)
	{
		printf("%d \n",n);
		n--;
	}
}

void fun(int n)
{
	if(n>0)
	{
		printf("%d \n",n);
		fun(n-1);
	}
}

int main()
{
	fun(5);
	fun1(5);
}
