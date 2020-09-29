// nCr=n!/(r!*(n-r)!)
//
//
//


#include <iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
		return(1);
	else
		return fact(n-1)*n;
}

int C(int n,int r)
{
	int a=fact(n);
	int b=fact(r);
	int c=fact(n-r);

	return a/(b*c);
}

int C1(int n,int r)
{
	if(r==0 || n==r)
		return 1;
	else
		return C1(n-1,r-1)+C1(n-1,r);
}


int main()
{
	printf("%d \n",C(6,2));
	printf("%d \n",C1(6,2));
}
