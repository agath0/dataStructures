//sum of n natural numbers
//
//
#include <iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return sum(n-1)+n;
	//here time O(n)
	//here space O(n)
}

int sum1(int n)
{
	return n*(n+1)/2;
	//this works the fastest of all
}

int sum2(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
		s=s+i;
	return s;
	//this is faster than recursion
}

int main()
{
	printf("%d \n",sum(5));
	printf("%d \n",sum1(5));
	printf("%d \n",sum2(5));
}
