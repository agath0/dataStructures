#include <iostream>
using namespace std;

template<class T>

class array
{
	private:
		T *a;
		int size;
		int length;
	public:
		array()
		{
			size=10;
			a=new T[10];
			length=0;
		}
		array(int sz)
		{
			size=sz;
			length=0;
			a=new T[size];
		}
		~array()
		{
			delete []a;
		}
		void display();
		void insert(int index,T x);
		T delet(int index);
};

template<class T>
void array<T>::display()
{
	for(int i=0;i<length;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}


template<class T>
void array<T>::insert(int index,T x)
{
	if(index>=0 && index<=length)
	{
		for(int i=length-1;i>=index;i--)
			a[i+1]=a[i];
	 	a[index]=x;
		length++;
	}
}

template<class T>
T array<T>::delet(int index)
{
	T x=0;
	if(index>=0 && index<length)
	{
		x=a[index];
		for(int i=index;i<length-1;i++)
			a[i]=a[i+1];
		length--;
	}
	return x;
}


int main()
{
	array<float> arr(10);
	array<char> arc(10);

	arr.insert(0,5);
	arr.insert(1,6.999);
	arr.insert(2,9.9);
	arr.display();

	arc.insert(0,'a');
	arc.insert(1,'b');
	arc.insert(2,'c');
	arc.display();


	cout<<arr.delet(0)<<endl;
	arr.display();


	return 0;

}
			
