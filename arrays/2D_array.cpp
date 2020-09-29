#include <iostream>
using namespace std;





int main()
{
	int a[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
	//here this 2Darray is created inside the stack
	
	for(int i=0;i<3;i++)
	{
		
		for(int n=0;n<4;n++)
		{
			printf("%d ",a[i][n]);
		}
		printf("\n");
	}
		
	printf("next \n");

	int *b[3];
	b[0]=new int[4];
	b[1]=new int[4];
	b[2]=new int[4];
	//this array is created partially in heap
	b[0][0]=9;
	b[0][1]=8;
	b[0][2]=3;
	b[0][3]=5;
	b[1][0]=1;
	b[1][1]=2;
	b[1][2]=3;
	b[1][3]=1;
	b[2][0]=1;
	b[2][1]=2;
	b[2][2]=3;
	b[2][3]=1;
	for(int i=0;i<3;i++)
	{
		for(int n=0;n<4;n++)
		{
			printf("%d ",b[i][n]);
		}
		printf("\n");
	}

	printf("next \n");

	int **c;
	c=new int*[3];
	c[0]=new int[4];
	c[1]=new int[4];
	c[2]=new int[4];
	//this array is created fully in heap
	c[0][0]=1;
	c[0][1]=2;
	c[0][2]=3;
	c[0][3]=5;
	c[1][0]=1;
	c[1][1]=2;
	c[1][2]=3;
	c[1][3]=1;
	c[2][0]=1;
	c[2][1]=2;
	c[2][2]=3;
	c[2][3]=1;
	for(int i=0;i<3;i++)
	{
		for(int n=0;n<4;n++)
		{
			printf("%d ",c[i][n]);
		}
		printf("\n");
	}

	
}
