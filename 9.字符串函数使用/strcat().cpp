#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* dest,const char* src)
{
	char* ret = dest;
	assert(*dest!='\0');
	assert(src);
	//1.找到目的字符串的'\0' 
	while(*dest!='\0')
	{
		dest++;
	}
	while(*dest++ = *src++)
	{
		;
	} 
	return ret;
	//2.继续追加 
}
int main()
{
	char arr1[30] = "Hello";
	char arr2[] = "World";
	//strcat(arr1,arr2);
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
