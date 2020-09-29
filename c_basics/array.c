#include<stdio.h>
#include<stdlib.h>


int main(){
	//computers main memory contains heap,
	//stack,main and code section 
	int a[5];//created in stack
	int b[3]={2,3,1};//declaration+initializatin
	for(int i=0;i<3;i++){
	printf("%d",b[i]);
	}
}	
