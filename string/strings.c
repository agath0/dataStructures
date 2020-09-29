#include <stdio.h>
#include <stdlib.h>

void displayChar(char e[])
{
	for(int i=0;e[i]!='\0';i++)
	{
		printf("%c",e[i]);
	}
	printf("\n");
}

int main()
{

	char name1[10]={'J','O','H','N','\0'};

	char name2[]={'J','O','H','N','\0'};

	char name3[]="JOHN";

	//as JOHN is written in double qoutes the
	//C compiler will automatically include \0 at the end

	char *name4="JOHN";

	//Here name is a character pointer pointing to
	//the address of location JOHN in heap
	//this string will automatically be created in 
	//heap though we didnot use any malloc or new fuction
	//strings created by all other above methods are created
	//inside the stack
	//
	displayChar(name1);

	printf("1%s \n",name1);
	printf("2%s \n",name2);
	printf("3%s \n",name3);
	printf("4%s \n",name4);


	char sta[50];
	printf("Enter a string : ");
	gets(sta);
	printf("You entered: %s\n", sta);

	
	char names[10];
	printf("Enter your name \n");
	scanf("%s",names);
	printf("%s \n",names);

	char str[50];
	printf("Enter a string : ");
	gets(str);
	printf("You entered: %s\n", str);

	//NOTE:OBSERVATIONS
	//this program know works perfectly but the gets
	//fuction wont wont work properly if scanf was used
	//before using gets function
	//This can observed in the above program that
	//is the str function do not allow you to enter
	//anything but skips and goes but the firs
	//sta funcion works very properly

	char name[10];
	printf("Enter your name \n");
	scanf("%s",name);
	printf("%s \n",name);

	return(0);

}
