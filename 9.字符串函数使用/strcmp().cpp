#include<stdio.h>
#include<string.h>
//ʹ�÷��� 
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwers" ;//һ���ַ�һ���ַ��ȣ���Ascall��a~z���α�� 
//	
//	int ret = strcmp(p1,p2);	
//	printf("%d\n",ret);
//	
//	//�ַ����ȽϺ��� ��˼����Ŷ 
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

//�Լ�ʵ�� 

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










