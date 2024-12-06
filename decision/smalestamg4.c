#include <stdio.h>
int main(){

	int w,x,y,z,sum;
	printf("enter the integer value for w:");
	scanf("%d",&w);
	printf("enter the integer value for x:");
	scanf("%d",&x);
	printf("enter the integer value for y:");
	scanf("%d",&y);
	printf("enter the integer value for z:");
	scanf("%d",&z);
	if(w>x){
		if(x>y)
			{
			if(y>z){
				printf("the smallest is z:%d\n",z);
			}
			else{
				printf("the smallest is y:%d\n",y);
			}
		}
		else{
			if(x>z){
				printf("the smallest is z:%d\n",z);
				}
			else{
				printf("the samllest is x:%d\n",x);
				}
			}
		}
	else{
			if(w>y){
				if(y>z){
					printf("the smallest is z:%d\n",z);
					}
				else{
					printf("the smallest is y:%d\n",y);

				}
				}
		
			
			else{
				if(w>z)
					
				{
			        	printf("the smallest is z:%d\n",z);
				}
				else{
					printf(" the smallest is w:%d\n",w);

																}
																	
				}
			}

				return 0;
				}


