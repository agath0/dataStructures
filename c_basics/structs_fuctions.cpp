#include <iostream>
using namespace std;


struct rectangle
{
	int length;
	int breadth;
};
void initialize(struct rectangle *r,int l,int b)
{
	r->length=l;
	r->breadth=b;
	//call by address
};
int area(struct rectangle r)
{
	return r.length*r.breadth;
	//call by values
};
void changelength(struct rectangle *r,int l)
{
	r->length=l;
	//call by address
};


int main()
{
	struct rectangle r;
	initialize(&r,10,5);
	area(r);
	changelength(&r,20);
	printf("%d",area(r));
}
