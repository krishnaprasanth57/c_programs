#include <stdio.h>
int main()

{
	int arr[] = {1,2,3,4,5};
	int *ptr = arr;
	    printf("array elements using pointer notation:\n");
	for(int i=0;i<5;i++){
	printf("%d",*(ptr + 1));

}
printf("\n");
return 0;
}
