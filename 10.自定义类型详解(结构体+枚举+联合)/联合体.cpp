#include<stdio.h>
//union Un
//{
//	int i;//4
//	char c;	//1
//};

//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));//4        
//	printf("%p\n",&u);
//	printf("%p\n",&(u.c));
//	printf("%p\n",&(u.i));
//	return 0;
//} 


//�ж��ǻ����Ǵ�˻���С��
//01 00 00 00  С�� 
//00 00 00 01  ��� 
//�͵�ַ-----�ߵ�ַ��

//int check_sys()
//{
//	int a = 1;//01 00 00 00 
//	return *(char*)&a; //����1��ΪС�ˣ�����Ϊ���  
//}
int check_sys()
{
	union Un{
		int a;
		char c;
	}u;//�����干��ͬһ���ڴ�
	 u.a =1;
	 return u.c;//����һ���ֽ� 
	 //����0����ʾ���
	 //����1����ʾС�� 
}
int main()
{
	int ret = check_sys();
	if(ret==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}			
	return 0;
} 







