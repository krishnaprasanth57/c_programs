#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four numbers\r\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{	printf("a is largest");
			}
			else{
				printf("d is largest");
			}
		}
		else{
			if(c>d)
			{ 
				printf("c is largest");
			}
			else{
				printf("d is largest");
			}
		}
	}
		else{
			if(b>c)
			{
				if(b>d)
				{
					printf("b is largest");
				}
				else{
					printf("d is latgest");
				}
		        }
			else{
				if(c>d)
				{
					printf("c is largest");
				}
				else{
					printf("d is largest");
				}
			}
		}
		return 0;
}

			

