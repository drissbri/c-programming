#include <stdio.h>
#include <stdlib.h>

//memchr
void* memchr1( const void* ptr, char ch,unsigned int count )
{
	char* ptr2 = (char *)ptr;
	for (int i=0; i<count; i++)
	{
		if (*(ptr2 + i) == ch)
		{
			return ptr2 + i;
		}
	}
	return NULL;
}

//memeset
void memset1(void *ptr, char x,unsigned int n)
{
	char* ptr2 = (char *)ptr;
	for (int i=0; i<n; i++)
	{
		*(ptr2 + i) = x;
	}
	return;
}

//memcpy
void memcpy1(void *dest, const void *src, int n)
{
	char* src1 = (char *)src;
	for (int i = 0; i<=n; i++)
	{
		*((char *)dest + i) = *(src1 + i);
	}
	return;
}

//memmove
void memmove1(void *str1, const void *str2, int n)
{
	char* str11 = (char *)str1;
	for (int i = n; i > 0; i--)
	{
		*((char *)str2 + i) = *(str11 + i);
	}
	return;
}


int main(int argc, char const *argv[])
{
	char strr[] = "abcd efgh";
	char strrr[] = "12345";
	memmove1(strrr ,strr, 4);
	printf("%s\n",strrr);
	return 0;
}
