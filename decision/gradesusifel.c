#include <stdio.h>
int main()
{
	int grade;
	printf("enter the grade:");
	scanf("%d",&grade);
	if(grade>=80)
	{
		printf("first class");
	}
	else if(grade>=75)
	{
	printf("second class");
	}
	else if(grade>=50)
	{
		printf("third class");
	}
	else if(grade>=40)
	{
		printf("just pass/very pour");
	}
	else{
		printf("fail");
	}

}
