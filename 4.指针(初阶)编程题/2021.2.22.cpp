//第5题（编程题)题目名称:
//字符串逆序题目内容:
//写一个函数，可以逆序一个字符串的内容。

#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int sz = strlen(str);
	char* left = str;
	char* right = str+sz-1;
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right =tmp;
		left++;
		right--; 
	} 
}
int main()
{
	char arr[100] = {0};
	//scanf("%s",arr);//空格不识别，有空格时会出错 
	gets(arr);//获取一行的信息 
	reverse(arr);
	printf("%s\n",arr);
} 
