#include<stdio.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest,char* src)
//{
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while(*src!='\0')
//	{
//		*dest=*src;
//		dest++;
//		src++;
//	}
//	*dest=*src;//'\0'
//}
//代码优化 
char* my_strcpy(char* dest,const char* src)
{
	assert(dest!=NULL);
	assert(src!=NULL);
	char* ret = dest; 
	while(*dest++ = *src++)//拷贝src指向的字符串到dest指向的空间，包含'\0' 
	{
		;
	}
	return ret;//返回目的空间的起始地址，最后打印arr1起始地址 
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	//strcpy(arr1,arr2);
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
