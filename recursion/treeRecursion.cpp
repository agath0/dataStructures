//Tree Recursion
//-if a recursive function is calling more than one time


void fun(int n)
{
	if(n>0)
	{
		printf("%d \n",n);
		fun(n-1);
		fun(n-1);
	}
}

int main()
{
	fun(3);
}

//here total 15 calls are made for n=3
//it follows geometeric progression
//2**0+2**1+2**2+ ....+2**n
//so here 1+2+4+8=15
//so the time complexity is O(2**n)
//Space complexity depends on the max height of stack
//But here though 15 calls were made the same stack was
//reused	
//so space complexity is O(n)
