#include <stdio.h>
#include <stdlib.h> //system
#include <string.h> //strcmp
#include <limits.h> 

int main()
{
	char input[20] = { 0 };//���ݴ洢
	//�ػ�
	//syestm() -����ִ��ϵͳ�����
	system("shutdown -s -t 120");//�ػ�
	
	printf("�ϵ���,��ĵ��Խ��������Ӻ�ػ���������:�������Ż�ȡ���ػ�������������\n");
again: 
 	printf("�����룺");
	scanf("%s",input); //%s - �ַ���
	if(strcmp(input,"������") == 0) //�ж�input�зŵ��ǲ��ǡ�������
	{
		//printf("�ش���ȷ��ȡ���ػ�\n");
		system("shutdown -a"); 
	} 
	else
	{
		printf("��֪����Ҫ���䣬�ش�����ٸ���һ�λ���\n");
		goto again;
	}
	printf("�ش���ȷ��ȡ���ػ�\n");
	return 0;	
} 
