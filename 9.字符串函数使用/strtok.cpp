//strtok---�и��ַ��� �����þ��� 
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[] = "1938145653@qq.com";
	char* p = "@.";
	
	char buf[1024] = {0};
	strcpy(buf,arr);
	
	char* ret = NULL;
	for( ret=strtok(buf,p); ret!=NULL; ret = strtok(NULL,p))//�������м������������о�̬�������ڶ����ַ�����ʼλ��Ϊ�գ�����յ�λ�á� 
	{
		printf("%s\n",ret);
	} 
	
	return 0;
}
