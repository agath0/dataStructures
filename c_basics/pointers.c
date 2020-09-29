#include <stdio.h>
#include <stdlib.h>

//=======Pointer
//Is an address variable for storing address of data
//Used for indirectly accessing the data
//=======Need of Pointers
//Memory
//-Heap
//-Stack
//-Code section 
//Program can directly access code section and stack
//but not the heap section
//So heap memory is external to the program
//*So to access it wen need pointers
//*If there are some files on the hard disk,for accessing a file
//the program cannot acces the files directly,so we need pointer
//and that pointer should be a file type 
//*Program may be accessing  keyboard, monitor, internet conection
//for this we need pointers to acceess it	 
//*Parameter passing



int main()
{
	int a=10;//her memory is allocated in heap
	int *p;//pointer initialisztion
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",p);

	//to allocate memory in heap in c use malloc()
	int *c;
	//we have to type-cast because the malloc() ruturns
	//void pointer which is a generic pointer so 
	//need to typecast it
	c=(int *)malloc(5*sizeof(int));
	
	//to allocate memory in heap in cpp use new()
	int *b;
	b=new int[5]; 

}

