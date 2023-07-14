#include<stdio.h>
union user
{
	int a;
	char b;
};

int main()
{
	union user obj;
	
	obj.b ='a';
	obj.a ='22';
	
	printf("%d\n",obj.a);
	printf("%c",obj.b);
	
	return 0;
}
