#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	//Q-1
	char* string = "Hello";
	//Q-2
	char array1[] = "World";
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
	printf("%s \n",array );
	
	return 0;
}