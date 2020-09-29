#include <iostream>
using namespace std;


//cpp support generic functions and generic classes
//Generic functions are template functions
//Generic classes are template classes



template<class t>//this make this class template
class arithmetic
{
	private:
		//int a;
		t a;//here t is a generic data type
		    //it can become int , float,long int ectc...
		//int b;
		t b;
	public:
		//arithmetic(int a,int b);
		arithmetic(t a,t b);
		//int add();
		//int sub();
		t add();
		t sub();
};

//===Generic classes
//This arithmetic class is performing operation on integer type.
//But what about other types(float,long int etc),for them this
//class will not work ,we need a separate class for it.But we need
//not do that cpp says that you can use the same class for multiople
//data types , at a time you can use only one data type so it works
//for any type of data.So for any type of data its called as a
//generic class and is defined as a template
//
//
template<class t>
//arithmetic::arithmetic(int a,int b)
arithmetic<t>::arithmetic(t a,t b)
{
	this->a=a;
	this->b=b;
	//to differentiate between the current object
	//and the actual parameters a,b we use arrow.
	//This is a pointer to the current object
}

template<class t>
t arithmetic<t>::add()
{
	t c;
	c=a+b;
	return c;
}
template<class t>
t arithmetic<t>::sub()
{
	t c;
	c=a-b;
	return c;
}


int main()
{
	arithmetic<int> ar(10,5);
	//so wherever we definde t it becomes int and this 
	//class becomes a pure integer class
	cout<<ar.add()<<endl;
	arithmetic<float> ar1(1.5,1.2);
	cout<<ar1.add()<<endl;
}
