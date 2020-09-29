//Nested recursion
//-recursion function will pass parameter
//as a recursive call



#include <iostream>
using namespace std;

int fun(int n)
{
	if(n>100)
		return n-10;
	else
		return fun(fun(n+11));
}

int main()
{
	int r=fun(95);
	printf("%d \n",r);
 	return 0;
}
