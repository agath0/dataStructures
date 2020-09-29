#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,*q;
	int i;
	p=(int *)malloc(5*sizeof(int));
	p[0]=3;
	p[1]=4;
	p[2]=1;
	p[3]=9;
	p[4]=8;

	q=(int *)malloc(10*sizeof(int));

	for(i=0;i<5;i++)
	{
		q[i]=p[i];
	}
	free(p);
	for(i=0;i<10;i++)
	{
		printf("%d \n",q[i]);
 	//	printf("%d \n",&q[i]);
	}
	return 0;
}

