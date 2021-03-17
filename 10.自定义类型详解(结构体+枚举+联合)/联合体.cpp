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


//判断是机器是大端还是小端
//01 00 00 00  小端 
//00 00 00 01  大端 
//低地址-----高地址、

//int check_sys()
//{
//	int a = 1;//01 00 00 00 
//	return *(char*)&a; //返回1就为小端，其他为大端  
//}
int check_sys()
{
	union Un{
		int a;
		char c;
	}u;//联合体共用同一段内存
	 u.a =1;
	 return u.c;//返回一个字节 
	 //返回0，表示大端
	 //返回1，表示小端 
}
int main()
{
	int ret = check_sys();
	if(ret==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}			
	return 0;
} 







