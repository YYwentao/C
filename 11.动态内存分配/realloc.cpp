#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		perror("malloc");
		return 0;
	}
	//ʹ��
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i) = i+1;
	}
	//realloc���ݵ����ռ�
	int* p1 = (int*)realloc(p,20*sizeof(int));
	if(p1==NULL)
	{
		perror("realloc");
	}
	else
	{
		p = p1;//���ٳɹ���p1ָ���׵�ַ����pָ����׵�ַ 
		p1=NULL; //��ʹ�ø�Ϊ�� 
	}
	for(i=10;i<20;i++)//������10���ֽڣ�pָ������ָ��Ϊ20���ֽڵ��׵�ַ 
	{
		*(p+i) = i+1;//p[10]��ʼ��ֵ������ʮһ���ַ� 
	} 
	for(i=0;i<20;i++) 
	{
		printf("%d ",p[i]);
	}
	//�ͷ� 
	free(p);
	p=NULL;
	
	return 0;
} 
