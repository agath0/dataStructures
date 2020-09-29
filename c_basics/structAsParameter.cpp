#include <iostream>
using namespace std;


struct rectangle
{
	int length;
	int breadth;
};
int area_value(struct rectangle a)
	//here we use call by value 
	//Separate objecte rectangle a will be created
	//and everything will be copied from rectangle r
{
	return a.length*a.breadth;
};
int area_reference(struct rectangle &a)
	//call by reference
{
	return a.length*a.breadth;
};

int area_address(struct rectangle *p, int l)
{
	//modifying length
	p->length =l;
	return ((*p).length)*((*p).breadth);
	
};

struct test
{
	int a[4];
	int n;
};
void tuc(struct test t1)
{
	t1.a[0]=10;
	t1.a[1]=9;
	//this changes will not affect actual parameters
	//since its pass by value
};
int main()
{
	struct rectangle r={10,3};
	//rectangel object is created
	printf("%d\n",area_value(r));
	printf("%d\n",area_reference(r));
	printf("%d\n",area_address(&r,20));
	struct test t={{2,4,1,4},4};
	tuc(t);
	//Note: we can sent a structure as a parameter in call by 
	//value but not an array(only as call by address)
	//But this structure can be passed by value even though
	//we the structure have an array inside
	//Note:why compiler dont allow call by value for arrays
	//because in call by value for example here everything in 
	//struc retangle t is copied to struct test t1
	//and this becomes time consuming
	//But when we pass array in struct compiler have to do it
	
}
