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
//�����Ż� 
char* my_strcpy(char* dest,const char* src)
{
	assert(dest!=NULL);
	assert(src!=NULL);
	char* ret = dest; 
	while(*dest++ = *src++)//����srcָ����ַ�����destָ��Ŀռ䣬����'\0' 
	{
		;
	}
	return ret;//����Ŀ�Ŀռ����ʼ��ַ������ӡarr1��ʼ��ַ 
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
