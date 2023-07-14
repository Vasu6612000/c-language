#include<stdio.h>
int main()
{
	int a = 10;
	int*b;
	
	b=&a;
	printf("%p\n",b,*b);
	printf("%p\n",b,*b);
	printf("%p\n",b,*b);
	
	return 0;
}
