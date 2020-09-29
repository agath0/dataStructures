#include <iostream>
using namespace std;


int fib(int n)
{
	int s;
	if(n<=1)
		return n;
	else
		s=fib(n-1)+fib(n-2);
		return s;
		//here considering fib(n-1) as fib(n-2)
		//then it 2*fib(n-1)
		//then its O(2**n)
		//
		//Here excessive Recursion takes place
		//since the recursive function is calling
		//itself multiple times
}


int f[10];
int fib1(int n)
{
	//Memorization
	//-storing the results of the function call
	//in an array so that it can be utilized again
	//when we need the same call thus avoiding 
	//excessive calls this approach is memorization

	if(n<=1)
	{
		f[n]=n;
		return n;
	}
	else
	{
		if(f[n-2]==-1)
			f[n-2]=fib(n-2);
		if(f[n-1]==-1)
			f[n-1]=fib(n-1);
		return f[n-2]+f[n-1];
	}
}
	

int fibloop(int n)
{
	int a=0,b=1,s,i;
	if(n<=1)
		return n;
	for(i=2;i<=n;i++)
	{
		s=a+b;
		a=b;
		b=s;
	}
	return s;
	//here its called 4n times
	//so O(n)
}



int main()
{
	
	for(int i=0;i<10;i++)
	{
		f[i]=-1;
	}
	printf("%d \n",fib(7));
	printf("%d \n",fibloop(7));
	printf("%d \n",fib1(7));
}
