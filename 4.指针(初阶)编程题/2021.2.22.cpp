//��5�⣨�����)��Ŀ����:
//�ַ���������Ŀ����:
//дһ����������������һ���ַ��������ݡ�

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
	//scanf("%s",arr);//�ո�ʶ���пո�ʱ����� 
	gets(arr);//��ȡһ�е���Ϣ 
	reverse(arr);
	printf("%s\n",arr);
} 
