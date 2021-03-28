/*
ͨѶ¼
1000���˵���Ϣ					
ÿ���˵���Ϣ��
����+�绰+��ַ+qq+�Ա�+����     

1.��� 2.ɾ�� 3.���� 4.�޸� 5.���� 0.�˳� 
*/
#include <stdio.h>
#include <string.h>
//��������+�������� 
#define MAX 1000

#define MAX_NAME 20
#define MAX_TELE 12 
#define MAX_ADDR 100 
#define MAX_QQ 20 
#define MAX_SEX 5

typedef struct  PeoInfo
{
	//�� ���ͽṹ��
	char name[MAX_NAME]; 
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;
//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//�ܷ�1000���˵����� 
	int sz =0;//��Ч���� 
}Contact; 

void add_contact(Contact* pc);//���һ���˵���Ϣ 
void del_contact(Contact* pc);//ɾ��һ���˵���Ϣ 
void serach_contact(Contact* pc);//����һ���˵���Ϣ 
void modify_contact(Contact* pc);//�޸�һ���˵���Ϣ 
void show_contact(Contact* pc);//��ʾͨѶ¼�е���Ϣ 
void sort_contact(Contact* pc); //����ͨѶ¼������ 
static int find_peo_by_name(Contact* pc,char name[]);

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
	//������ͨѶ¼ 
	Contact con ;
	int input = 0;
	do
	{
		menu();//���ײ˵� 
		printf("��ѡ��>") ;
		scanf("%d",&input);
		switch(input)
		{
			case ADD:
				add_contact(&con); 
				break;
			case DEL:
				del_contact(&con);
				break;
			case SERACH:
				serach_contact(&con);
				break;
			case MODIFY:
				modify_contact(&con);
				break;
			case SORT:
				sort_contact(&con); 
				break;
			case SHOW:
				show_contact(&con);
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


int main()
{
	test();//
	return 0;
} 
//���һ���˵���Ϣ
void add_contact(Contact* pc)
{
	if(pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		//��� 
		printf("����������:>");
		scanf("%s",pc->data[pc->sz].name);
		printf("������绰:>");
		scanf("%s",pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s",pc->data[pc->sz].addr);
		printf("������qq:>");
		scanf("%s",pc->data[pc->sz].qq);
		printf("�������Ա�:>");
		scanf("%s",pc->data[pc->sz].sex);
		printf("����������:>"); 
		scanf("%d",&(pc->data[pc->sz].age));
	
		pc->sz++;
	}
}
//ɾ��һ���˵���Ϣ
static int find_peo_by_name(Contact* pc,char name[])
{
	int i = 0;
	for(i=0;i < pc->sz;i++)
	{
		if(strcmp(name,pc->data[i].name)==0)
		{
			return i;//�ҵ��ˣ������±� 
		}
	} 
	return -1;//�Ҳ��� 
}
void del_contact(Contact* pc)
{
	if(pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[MAX_NAME] = {0}; 
		printf("������Ҫɾ���˵����֣�>");
		scanf("%s",&name);
		//1.�ҵ���ϵ�˵���Ϣ
		int pos = find_peo_by_name(pc,name);
		if(pos==-1)
		{
			printf("�ܵ�Ǹ��ɾ�����˲�����\n");
		}
		else
		{
			//2.ɾ����Ϣ 
			int j = 0;
			for(j=pos;j < pc->sz-1;j++)
			{
				pc->data[j] = pc->data[j+1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
		
	}
	
} 
//����һ���˵���Ϣ 
void serach_contact(Contact* pc)
{
	char name[MAX_NAME] = {0}; 
	printf("������Ҫ�����˵�������>");
	scanf("%s",&name);
	int pos = find_peo_by_name(pc,name);
	if(pos ==-1)
	{
		printf("�ܵ�Ǹ�����ҵ��˲�����\n");
	}
	else
	{
		printf("%8s %12s %14s %12s %5s %5s\n","����","�绰","��ַ","QQ","�Ա�","����"); 
		printf("%8s %12s %14s %12s %5s %5d\n",pc->data[pos].name,
			pc->data[pos].tele,
			pc->data[pos].addr,
			pc->data[pos].qq,
			pc->data[pos].sex,
			pc->data[pos].age);
	} 
}
//�޸�һ���˵���Ϣ 
void modify_contact(Contact* pc)
{
	char name[MAX_NAME] = {0}; 
	printf("�������޸ĵ��˵�������>");
	scanf("%s",&name);
	int pos = find_peo_by_name(pc,name);
	if(pos == -1)
	{
		printf("�ܵ�Ǹ���޸ĵ��˲�����\n");
	}
	else
	{
		printf("������������:>");
		scanf("%s",pc->data[pos].name);
		printf("�������µ绰:>");
		scanf("%s",pc->data[pos].tele);
		printf("�������µ�ַ:>");
		scanf("%s",pc->data[pos].addr);
		printf("��������qq:>");
		scanf("%s",pc->data[pos].qq);
		printf("���������Ա�:>");
		scanf("%s",pc->data[pos].sex);
		printf("������������:>"); 
		scanf("%d",&(pc->data[pos].age));
	} 
} 
//��ʾͨѶ¼�е���Ϣ
void show_contact(Contact* pc)
{
	printf("%8s %12s %14s %12s %5s %5s\n","����","�绰","��ַ","QQ","�Ա�","����"); 
	int i = 0;
	for(i=0;i<pc->sz;i++)
	{
		printf("%8s %12s %14s %12s %5s %5d\n",pc->data[i].name,
			pc->data[i].tele,
			pc->data[i].addr,
			pc->data[i].qq,
			pc->data[i].sex,
			pc->data[i].age);
	}
}
 //����ͨѶ¼������ 
void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for(i=0;i< pc->sz-1;i++)//���� 
	{
		int flag = 1;//�����Ѿ����� ,�����Ż� 
		for(j=0;j<pc->sz-1-i;j++)//ÿ�˽���
		{
			if(strcmp(pc->data[j].name,pc->data[j+1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j+1];
				pc->data[j+1] = tmp;
				flag = 0;				
			}
		} 
		if(1==flag)
		{
			break;
		}
	} 	
} 



