#include<stdio.h>
#include<string.h>
//使用方法 
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwers" ;//一个字符一个字符比，按Ascall码a~z依次变大 
//	
//	int ret = strcmp(p1,p2);	
//	printf("%d\n",ret);
//	
//	//字符串比较函数 意思超简单哦 
//	if(strcmp(p1,p2)==0)
//	{
//		printf("p1==p2\n");
//	} 
//	else if(strcmp(p1,p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(strcmp(p1,p2)<0)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

//自己实现 

int my_strcmp(char* str1 ,char* str2)
{
	while(*str1 ==*str2)
	{
		if(*str1=='\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//return (*str1-*str2);
	if(*str1>*str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdefg" ;
	
	int ret = my_strcmp(p1,p2);	
	printf("%d\n",ret);
}










