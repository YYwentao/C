#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1!=NULL);
	assert(p2!=NULL);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur = (char*)p1;
	if(*p2 == '\0')
	{
		return (char*)p1; 
	}
	while(*cur)
	{
		s1=cur;
		s2=(char*)p2;
		while((*s1==*s2)&& *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;//�ҵ��ִ� 
		}	
		if(*s1=='\0')////p1��p2�̣���ǰ��ֹ�����п��ޣ������Ż�����  
		{
			return NULL; 
		}	
		cur++;
	}
	return NULL; //�Ҳ����ִ� 
	 
}
int main()
{
	char *p1 ="abcddefghi";
	char *p2 ="def";
	//char* ret = strstr(str1,str2);
	char* ret = my_strstr(p1,p2);
	if(ret == NULL)
	{
		printf("�ִ�������\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}
