/*
通讯录
1000个人的信息					
每个人的信息：
名字+电话+地址+qq+性别+年龄     

1.添加 2.删除 3.查找 4.修改 5.排序 0.退出 
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
	int input = 0;
	do
	{
		menu();//简易菜单 
		printf("请选择：>") ;
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
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误\n");
				break; 
		}
	}while(input) ;
}

//类型声明+函数声明 
typedef struct  PeoInfo
{
	//人 类型结构体
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
