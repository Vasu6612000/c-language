	#include<stdio.h>
union user
{
	int a;
	int b;
};

int  main()
{
	union user obj;
	
	obj.a =10;
	obj.b =78;
	
	printf("%d\n",obj.a);
	printf("%d",obj.b);
     
    return 0;
}
