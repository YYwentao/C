#include<stdio.h>
#include<stdlib.h>
int main()
{
	//��̬�ڴ���� 
	int* p = (int*)malloc(100);//����100���ֽ�ǿ��ת��Ϊint�ͣ�pָ��ָ���׵�ַ 
	if(p==NULL)
	{
		perror("malloc");
	}
	else
	{
		int i = 0;
		for(i=0;i<25;i++)
		{
			*(p+i) = i;
			printf("%d ",*(p+i)); 
		}
		//�ͷſռ� 
		free(p);
		p=NULL;
	} 
	return 0;
} 


