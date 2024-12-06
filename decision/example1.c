#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is smaller");
		}
	        else{
			printf("c is smaller");
		}	
	}
else
{
	if(b<c)
	{
        printf("b is smaller");
	}
	else{
	printf("c is smaller");
	}
}


return 0;

}
