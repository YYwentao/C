/*
ͨѶ¼
1000���˵���Ϣ					
ÿ���˵���Ϣ��
����+�绰+��ַ+qq+�Ա�+����     

1.��� 2.ɾ�� 3.���� 4.�޸� 5.���� 0.�˳� 
*/
#include <stdio.h>

void menu()
{
	printf("**********************************\n");
	printf("******  1.add       2.del    *****\n");
	printf("******  3.serach    4.modify *****\n");
	printf("******  5.sort      6.show   *****\n");
	printf("******        0.exit         *****\n");
	printf("**********************************\n");
}

enum Option//ѡ��ѡ�� 
{
	EXIT,//ö��Ĭ��0ѡ�ʼ 
	ADD,//�� 
	DEL,//ɾ 
	SERACH,//�� 
	MODIFY,//�� 
	SORT,//�� 
	SHOW,//չ	 
};

void test()
{
	int input = 0;
	do
	{
		menu();//���ײ˵� 
		printf("��ѡ��>") ;
		scanf("%d",&input);
		switch(input)
		{
			case ADD:
				break;
			case DEL:
				break;
			case SERACH:
				break;
			case MODIFY:
				break;
			case SORT:
				break;
			case SHOW:
				break;
			case EXIT:
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("ѡ�����\n");
				break; 
		}
	}while(input) ;
}

//��������+�������� 
typedef struct  PeoInfo
{
	//�� ���ͽṹ��
	char name20[]; 
	char tele[12];
	char addr[100];
	char qq[20];
	char sex[5];
	short age;
};
int main()
{
	test();//
	
	return 0;
} 
