//exponent m**n
//
//

#include <iostream>
using namespace std;


int pow(int m,int n)
{
	if(n==0)
		return 1;
	else
		return pow(m,n-1)*m;
}

int main()
{
	printf("%d \n",pow(2,3));
}

 
