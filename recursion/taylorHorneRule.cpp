#include <iostream>
using namespace std;
#include <stdio.h>

double e5(double x,int n)
{
	double s=1; 
	int i;
	double num=1;
	double den=1;
	for(i=1;i<=n;i++)
	{
		num*=x;
		den*=i;
		s+=num/den;
	}
	return s; 
}


double e4(double x,int n)
{
	double s=1; 
	for(n>0;n--;)
	{
		s=1+(x/n)*s;
	}
	return s; 
}



double e3(double x,int n)
{
	double s=1; 
	int r=n-1;
	for(r>0;r--;)
	{
		n--; 
		s=1+(x/n)*s;
	}
	return s; 
}

double e(double x,int n)
{
	double z; 
	double s=1; 
	for(n>0;n--;)
	{
		z=s;
		s=1+(x/n)*s;
	}
	return z; 
}

double e2(double x,int n)
{
	double z; 
	double s=1; 
	
	for(n>0;n--;)
	{
		if(n==0)
			return s;
		else
			s=1+(x/n)*s;
		
	}
	return 0;

}


double e1(double x,double n)
{
	static double s;
	if(n==0)
		return s;
	else
		s=1+(x/n)*s;
		return e1(x,n-1);
}

int main()
{
	printf("%f \n",e(2,10));
	printf("%f \n",e1(2,10));
	printf("%f \n",e2(2,10));
	printf("%f \n",e3(2,10));
	printf("%f \n",e4(2,10));
	printf("%f \n",e5(2,10));

	printf("hello world \n");
        cout << "Hello foolish World\n";
}
