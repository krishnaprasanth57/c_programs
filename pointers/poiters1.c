#include <stdio.h>
int main()
{
	int number=50;
	int *p;
	p=&number;
	printf("address of p variable is %u\n",p);
	p=p+3;
	printf("after adding 3:address of p variable id %u\n",p);
	return 0;
}

