#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	//Q-1
	char string[100] = "Hello";
	//Q-2
	char array1[] = "World";
	//Q-3
	char array[11];
	for (int i = 0; i<=11; i++)
	{	
		if (i<5)
		{
			array[i] = string[i];	
		}
		if (i==5)
		{
			array[i] =  ' ';
		}
		if (i>5)
		{
			array[i] = array1[i-6];
		}
	}
	printf("%s \n",array);
	//Q-4
	strcat(string, array1);
	printf("%s \n",string);
	//Q-5
	strcpy(string,array1);
	printf("%s \n",string);
	return 0;
}