#include <stdlib.h>                                                               
#include <stdio.h>     

int main()
{
	int a=2;
	int *p = &a;
	printf("%d",*p);

	*p = 3;
	printf("\n%d",*p);

	int b = 6;
	p=&b;
	printf("\n%p",*p);
	printf("\n%d",*p);

	void *x=NULL;
	printf("\nx:",x);
}

