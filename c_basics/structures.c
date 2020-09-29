
//structures :collection of related dissimilar members
//(data items) under one name 
//Its used for defining user defined data types
//Primitive data types:integer ,float , etc
//Using primitives we define our own data type
//depending on our requirement

#include<stdio.h>
#include<stdlib.h>


struct rectangle
{
	int length;//takes 2 bytes
	int breadth;//takes 2 bytes
};
struct complexnum
{
	int real;
	int img;
};
struct student
{
	int roll;
	char name[25];//takes 25 bytes
	char department[10];
	char address[50];
};

struct cards
{
	int face;//2 bytes
	int shape;//2 bytes
	int color;//2 bytes
	//totall 6 bytes
};
 
int main()
{
	
	struct cards deck[52]{{1,0,0},{2,0,0},{1,1,0},{2,1,0}};
	//here in {1,0,0} the face 1, shape 0, color 0
	//this will form an array of structures
	//we have 52 such structures
	//total 52*6=312
	printf("%d \n",deck[0].face);
	printf("%d \n",deck[0].shape);


	struct rectangle r={10,4};
	printf("area of rctangle id %d \n",r.length*r.breadth);


	struct student s;
	s.roll=10;
	printf("the roll no is ",s.roll);
}
