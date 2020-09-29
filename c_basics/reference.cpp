#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//Reference is available only in cpp not in c 
//====Reference
//its a nickname or alis given to a variable



int main()
{
	int a=10;
	int &r=a;//reference initialisation
	//now variabel a is having one more name r
	//so you can call this value with name a and r
	//so we have two name for the same value inside memory
	//So now if the address of a in 200 then
	//adress of r is also 200
	
	cout<<a<<endl;
	cout<<r<<endl;
	a++;
	cout<<a<<endl;
	cout<<r<<endl;
	r++;
	cout<<a<<endl;
	cout<<r<<endl;
}

