#include <stdio.h>
int main()
{
	int i,j,k;
	printf("enter the rows:");
	scanf("%d",&k);
	i = k;
	while(i>=1)
	{
		j=i;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("*\n");
		i++;
	  
	}
	return 0;
}
