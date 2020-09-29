//Head recursion
//-if a recursive function is calling itself and that
//that recursive call is the first statement in a fuction
//-so all the processing is done at returning time
//
//
//Comparing with loop
//-to do something at returning time it cannot be easily
//converted but it can be but the program will look very
//different

#include <iostream>
using namespace std;

void fun1(int n)
{
	int i=1;
	while(i<=n)
	{
		printf("%d \n",n);
		i++;
	}
}

void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d \n",n);
	}
}

int main()
{
	fun(5);
	fun1(5);
}
