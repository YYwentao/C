#include<stdio.h>
#include<string.h>
//��2��(�����)
//��Ŀ����:
//�ַ�����ת���
//��Ŀ����:
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//����:����s1=AABCD��s2= BCDAA������1
//����s1=abcd��s2=ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//void left_move(char* arr,int k){
//	int len = strlen(arr);
//	int i = 0;
//	for(i=0;i<k;i++)
//	{
//	  ////����һ���ַ�
//		//��һ��
//		char tmp =*arr;
//		//�ڶ��� 
//		int j = 0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);
//		}
//		//������
//		*(arr+len-1)=tmp;
//	}
//}
//int is_left_move(char* s,char* t){
//	int len = strlen(s);
//	int i = 0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s,1);
//		int ret = strcmp(s,t);
//		if(ret==0)
//		return 1;
//	}
//	return 0;
//}

//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1!=len2)
//		return 0;
//	//1.��str1����׷��һ��str1
//	//str(str1,str1)  err 
//	strncat(str1,str1,6);//AABCDAABCD
//	//�ж�str2ָ����ַ����Ƿ���str1ָ����ַ��� 
//	//strstr-���ִ�
//	char* ret = strstr(str1,str2);
//	if(ret == NULL)
//	{
//		return 0;
//	} 
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char s1[30] = "AABCD";
//	char s2[] = "ABCDA";
//	int ret = is_left_move(s1,s2);
//	if(ret==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//} 

//��ָoffer
//��Ŀ����:
//���Ͼ���
//��Ŀ����:
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��:ʱ�临�Ӷ�С��O(N);
int FindSum(int arr[3][3],int k,int* row,int* col)
{
	int x = 0;
	int y = *col-1;
	
	while(x<=*row-1&&y>=0)
	{
		if(arr[x][y]>k)
		{
			y--;
		}
		else if(arr[x][y]<k)
		{
			x++;
		}
		else
		{
			*row=x;
			*col=y;
			return 1;
		}
	}
	//�Ҳ���
	return 0; 
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	int x = 3;
	int y = 3;
	//�����β��� 
	int ret = FindSum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n",x,y);
	}
	else
	{
		printf("�Ҳ���\n");
	} 
	return 0;
}





