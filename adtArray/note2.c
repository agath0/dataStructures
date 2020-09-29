#include <stdio.h>
#include <stdlib.h>


int main()
{
	int ar[10]={1,2,3,4,5};
	int i=0;
	while(i<5)
	{
		printf("%d ",ar[i]);
		i++;
	}
	printf("\n");
	int j=0;
	while(j<5)
	{
		j++;
		printf("%d ",ar[j]);
	}
	printf("\n");
	
	int k=0;
	while(k<5)
	{
		printf("%d ",ar[k++]);
	}
}

		
			

