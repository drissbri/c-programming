#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Defining complex structure
struct complex 
{
	double real;
	double imaginary;
};

typedef struct complex complex;

//Addition Function
complex add(complex a, complex b) 
{
	complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}

//Substractin Function
complex sub(complex a, complex b) 
{
	complex c;
	c.real = a.real - b.real;
	c.imaginary = a.imaginary - b.imaginary;
	return c;
}

//Multiplication Function
complex mul(complex a, complex b) 
{
	complex c;
	c.real = a.real*b.real - a.imaginary*b.imaginary;
	c.imaginary = a.real*b.imaginary - b.real*a.imaginary;
	return c;
}

//Division Function
complex division(complex a, complex b) 
{
	complex c;
	if (b.real == 0 && b.imaginary == 0)
	{
		c.real = 0;
		c.imaginary = 0;
	}
	else
	{
	c.real = (a.real*b.real + a.imaginary*b.imaginary)/(pow(b.real,2)+pow(b.imaginary,2));
	c.imaginary = (a.imaginary*b.real - a.real*b.imaginary)/(pow(b.real,2)+pow(b.imaginary,2));
	}
	return c;

}

//Printing Function
void printcomplex(complex a)
{
	printf("%g + %gi\n", a.real,a.imaginary);
	return;
}

int main()
{
	complex a = {1,2};
	complex b = {3,4};
	printcomplex(division(a,b));
	return 0;
}