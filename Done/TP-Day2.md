### Exercise 1:
- Write a C program that reads two real numbers, and then displays their product, with a precision of three decimal places. 

## Code:

```C
 int main()
{ 
  int a, b;
  printf("Saisir a :\n");
  scanf("%f", &a);
  printf("Saisir b :\n");
  scanf("%f", &b);
  printf("%.3f",a*b);
  return 0;
}
```

### Exercise 2:
- Write a C program that allows you to swap the content of two integer variables by passing through a third auxiliary variable. 
- Display the two variables before and after permutation.

## Code:

```C
 int main()
{ 
  int x, y,z;
  printf("Saisir x :\n");
  scanf("%d", &x);
  printf("Saisir y :\n");
  scanf("%d", &y);
  z = x;
  x = y;
  y = z;
  printf("x = %d, y = %d \n",x,y);
  return 0;
} 
```

### Exercise 3:

- Suppose C program containing the following statements:

```C
int   i =  8;
int   j =  5;
float x =  0.005f;
float y = -0.01f;
char  c = 'c';
char  d = 'd';
```

- Determine the value of these expressions:

    - (3*i - 2*j)%(2*d - c) 
    #value : 14
    -  2*((i/5) + (4*(j-3))%(i + j - 2))  
    #value : 18
    -  i <= j  
    #value : 0
    -  j != 6  
    #value : 1
    -  c == 99 
    #value : 0
    -  5*(i + j) > 'c'  
    #value : 0
    - (i > 0) && (j < 5)  
    #value : 0
    - (i > 0) || (j < 5)  
    #value : 1
    - (x > y) && (i > 0) || (j < 5)  
    #value : 1
    - (x > y) && (i > 0) && (j < 5)  
    #value : 0

### Exercise 4:

- Analyse the expressions in the program below:

```C
#include <stdio.h>
main()
{
  int a;
  int b;
  int c;

  a = 16;
  b = 2;
  c = 10;

  c += a > 0 && a <= 15 ? ++a : a/b;
  /*
   * What about the following expression? :
   * ----------------------------------
   */
  a > 30 ? b = 11 : c = 100;
}
```
## Answer:

- The first one means : if c + a is positif and a is lower than or equals 15 then, add 1 to a else, devide a by b.
- The second one means : if a is greater than 30 then, give b a value of 11 else, give c a value of 100.