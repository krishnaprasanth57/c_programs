#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values!");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
	if(a<c){
	printf("a is smaller");}
	else
	{printf("c is smaller");}
	}
	else
	{if(b<c){
		printf("b is smaller");
		}
	else {
	printf("c is smaller");
	}}
	return 0;
}
