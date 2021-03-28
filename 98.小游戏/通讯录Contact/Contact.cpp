/*
通讯录
1000个人的信息					
每个人的信息：
名字+电话+地址+qq+性别+年龄     

1.添加 2.删除 3.查找 4.修改 5.排序 0.退出 
*/
#include <stdio.h>
#include <string.h>
//类型声明+函数声明 
#define MAX 1000

#define MAX_NAME 20
#define MAX_TELE 12 
#define MAX_ADDR 100 
#define MAX_QQ 20 
#define MAX_SEX 5

typedef struct  PeoInfo
{
	//人 类型结构体
	char name[MAX_NAME]; 
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;
//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//能放1000个人的数据 
	int sz =0;//有效个数 
}Contact; 

void add_contact(Contact* pc);//添加一个人的信息 
void del_contact(Contact* pc);//删除一个人的信息 
void serach_contact(Contact* pc);//查找一个人的信息 
void modify_contact(Contact* pc);//修改一个人的信息 
void show_contact(Contact* pc);//显示通讯录中的信息 
void sort_contact(Contact* pc); //排序通讯录的数据 
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

enum Option//选择，选项 
{
	EXIT,//枚举默认0选项开始 
	ADD,//增 
	DEL,//删 
	SERACH,//查 
	MODIFY,//改 
	SORT,//排 
	SHOW,//展	 
};

void test()
{
	//创建的通讯录 
	Contact con ;
	int input = 0;
	do
	{
		menu();//简易菜单 
		printf("请选择：>") ;
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
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误\n");
				break; 
		}
	}while(input) ;
}


int main()
{
	test();//
	return 0;
} 
//添加一个人的信息
void add_contact(Contact* pc)
{
	if(pc->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		//添加 
		printf("请输入姓名:>");
		scanf("%s",pc->data[pc->sz].name);
		printf("请输入电话:>");
		scanf("%s",pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s",pc->data[pc->sz].addr);
		printf("请输入qq:>");
		scanf("%s",pc->data[pc->sz].qq);
		printf("请输入性别:>");
		scanf("%s",pc->data[pc->sz].sex);
		printf("请输入年龄:>"); 
		scanf("%d",&(pc->data[pc->sz].age));
	
		pc->sz++;
	}
}
//删除一个人的信息
static int find_peo_by_name(Contact* pc,char name[])
{
	int i = 0;
	for(i=0;i < pc->sz;i++)
	{
		if(strcmp(name,pc->data[i].name)==0)
		{
			return i;//找到了，返回下标 
		}
	} 
	return -1;//找不到 
}
void del_contact(Contact* pc)
{
	if(pc->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		char name[MAX_NAME] = {0}; 
		printf("请输入要删除人的名字：>");
		scanf("%s",&name);
		//1.找到联系人的信息
		int pos = find_peo_by_name(pc,name);
		if(pos==-1)
		{
			printf("很道歉，删除的人不存在\n");
		}
		else
		{
			//2.删除信息 
			int j = 0;
			for(j=pos;j < pc->sz-1;j++)
			{
				pc->data[j] = pc->data[j+1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
		
	}
	
} 
//查找一个人的信息 
void serach_contact(Contact* pc)
{
	char name[MAX_NAME] = {0}; 
	printf("请输入要查找人的姓名：>");
	scanf("%s",&name);
	int pos = find_peo_by_name(pc,name);
	if(pos ==-1)
	{
		printf("很道歉，查找的人不存在\n");
	}
	else
	{
		printf("%8s %12s %14s %12s %5s %5s\n","姓名","电话","地址","QQ","性别","年龄"); 
		printf("%8s %12s %14s %12s %5s %5d\n",pc->data[pos].name,
			pc->data[pos].tele,
			pc->data[pos].addr,
			pc->data[pos].qq,
			pc->data[pos].sex,
			pc->data[pos].age);
	} 
}
//修改一个人的信息 
void modify_contact(Contact* pc)
{
	char name[MAX_NAME] = {0}; 
	printf("请输入修改的人的姓名：>");
	scanf("%s",&name);
	int pos = find_peo_by_name(pc,name);
	if(pos == -1)
	{
		printf("很道歉，修改的人不存在\n");
	}
	else
	{
		printf("请输入新姓名:>");
		scanf("%s",pc->data[pos].name);
		printf("请输入新电话:>");
		scanf("%s",pc->data[pos].tele);
		printf("请输入新地址:>");
		scanf("%s",pc->data[pos].addr);
		printf("请输入新qq:>");
		scanf("%s",pc->data[pos].qq);
		printf("请输入新性别:>");
		scanf("%s",pc->data[pos].sex);
		printf("请输入新年龄:>"); 
		scanf("%d",&(pc->data[pos].age));
	} 
} 
//显示通讯录中的信息
void show_contact(Contact* pc)
{
	printf("%8s %12s %14s %12s %5s %5s\n","姓名","电话","地址","QQ","性别","年龄"); 
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
 //排序通讯录的数据 
void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for(i=0;i< pc->sz-1;i++)//趟数 
	{
		int flag = 1;//假设已经有序 ,代码优化 
		for(j=0;j<pc->sz-1-i;j++)//每趟交换
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



