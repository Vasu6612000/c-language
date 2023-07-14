#include<stdio.h>
int main()
{
	int a[]={78,59,48,62,12};
	int*b[5];
	
	int i;
	
	for(i=0;i<=5;i++);
	{
		b[i]=&a[i];
		printf("%u  =>%d\n",b[i],b[i]);
	}
	return 0;
}
