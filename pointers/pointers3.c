#include <stdio.h>
int main()
{
	int arr[] = {10,20,30,40,50};
	int *ptr = arr;
	printf("element at index 0: %d\n",*ptr);
	printf("element at index 1: %d\n",*(ptr+1));
	printf("element at index 2: %d\n",*(ptr+2));
	 return 0;
}
