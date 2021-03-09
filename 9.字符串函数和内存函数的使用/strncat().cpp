#include<stdio.h>
#include<string.h>

char* my_strncat(char* str1,char* str2,int k)
{
	char* ret = str1;
	while(*str1!='\0')
	{
		str1++;
	}
	int i = 0;
	for(i=0;i<k;i++)
	{
		*str1++ = *str2++;
	}
	return ret;
}
int main()
{
	char arr1[30] = "Hello";
	char arr2[] ="World";
	my_strncat(arr1,arr2,4);
	//strncat(arr1,arr2,3);
	printf("%s\n",arr1);
	return 0;
} 
