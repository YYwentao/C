#include<stdio.h>
#include<string.h>
#include<assert.h>
//��һ�� 
//��Ŀ����:
//ʵ��һ�����������������ַ����е�k���ַ���
//����:
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//��ת�ַ���

////                                   1.������ⷨ 
//void left_move(char* arr,int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//����һ���ַ�
//		//��һ��
//		 char tmp = *arr;
//		 //�ڶ��� 
//		int j = 0;
//		for(j=0;j<len-1 ;j++)
//		{
//			*(arr+j )= *(arr+1+j); 
//		} 
//		//������
//		*(arr+len-1) = tmp;
//	}
//} 
////                           2.������ת��
//����: 
// ab cdef
// ba fedc
// cdefab 
//void reverse(char* left,char* right)
//{
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//int main()
//{
//	int a = 0;//����Ҫ�������ַ��� 
//	char arr[] = "abcdef";
//	scanf("%d",&a);
//	left_move(arr,a);
//	printf("%s\n",arr); 
//	return 0;
//}

 
