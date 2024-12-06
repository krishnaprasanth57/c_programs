#include <stdio.h>
void stringconcat(char *dest,const char *src)

{
	while (*dest!='\0'){
		dest++;
	}
	while(*src !='\0'){

			*dest = *src;
			dest++;
			src++;
			}
			*dest

	int main() {
			char str1[100],str2[100];
			printf ("enter the first string:");
			scanf("%[^\n]",str1);
			printf("enter the second string:");
			scanf("%[^\n]",str2);
			char *ptr = str1;
			stringconcat(ptr,str2);

