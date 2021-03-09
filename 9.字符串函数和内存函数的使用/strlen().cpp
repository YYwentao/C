//1.计数器方法 
//2.递归
//3。指针-指针 
#include<stdio.h>
#include<assert.h>
int my_strlen1(const char* str)
{
	int count = 0;
	assert(str!=NULL);
	while(*str!='\0')//while(*str) 
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen2(const char* str)
{
	if(*str=='\0')
	{
		return 0;
	}
	else
	{
		return 1+my_strlen2(str+1);
	} 
}
int main()
{
	char arr[] = "abcdef"; 
	int len1 = my_strlen1(arr);	//1.计数器方法 
	printf("%d",len1);
	int len2 = my_strlen2(arr); //2.递归调用 
	printf("%d",len2); 
	return 0;
} 
