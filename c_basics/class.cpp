#include <iostream>
using namespace std;

class rectangle
{
	private:
		int length;
		int breadth;
	public:
		rectangle(){length=breadth=1;}
		//default constructor
		rectangle(int l,int b);//parametrized constructor
		//constructor overloading, this will be 
		//defined outside using scope resolution operator
		int area();
		int perimeter();
		//facilitators
		int getlength(){return length;}
		//accessor
		void setlength(int l){length=l;}
		//mutator
		~rectangle();;
		//destructor:to destroy anything,if you have any
		//dynamic memory or location inside the construc
		//tor then you can release that memory inside
		//a destructor
};

rectangle::rectangle(int l,int b)
{
	length=l;
	breadth=b;
}
int rectangle::area()
{
	return length*breadth;
}
int rectangle::perimeter()
{
	return 2*(length+breadth);
}
rectangle::~rectangle()
{
}

int main()
{
	rectangle r(10,5);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
	r.setlength(20);
	cout<<r.getlength()<<endl;
}
		
