#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct structure
{
	int integer;
	char* string; 
};

typedef struct structure structure;

void swap(structure a,structure b)
{
	structure c;
	c.integer = a.integer;
	c.string = a.string;
	a.integer = b.integer;
	a.string = b.string;
	b.integer = c.integer;
	b.string = c.string;
}

structure write(structure a)
{
	
}

void print(structure a)
{
	printf("%d + %s\n", a.integer,a.string);
}

int main()
{
	
	return 0;
}