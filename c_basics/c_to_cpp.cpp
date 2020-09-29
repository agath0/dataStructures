#include <iostream>
using namespace std;


class rectangle
{
	private:
	int length;
	int breadth;
	
	public:
	rectangle(int l,int b)
		//this is having same name as class name 
		//so this becomes a constructor
		//this will be automatically called whenever we
		//are calling an object,it does the job of 
		//initializing an object 
	{
		length=l;
		breadth=b;
		//call by address
	};
	int area()
	{
		return length*breadth;
		//call by values
	};
	void changelength(int l)
	{
		length=l;
		//call by address
	};

};

	int main()
	{
		rectangle r(10,5);
		r.area();
		r.changelength(200);
		printf("%d",r.area());
	}

