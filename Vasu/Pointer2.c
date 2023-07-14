#include<stdio.h>
int main()
{
	int arr[]={45,92, 64,81,20};
	int*b;
	
	b=arr;

    printf("%u => %d\n",b+0,*(b+0));
    printf("%u => %d\n",b+1,*(b+1));
    printf("%u => %d\n",b+2,*(b+2));
    printf("%u => %d\n",b+3,*(b+3));
    printf("%u => %d\n",b+4,*(b+4));

   return 0;
}
