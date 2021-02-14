#include <stdio.h>
#include <stdlib.h> //system
#include <string.h> //strcmp
#include <limits.h> 

int main()
{
	char input[20] = { 0 };//数据存储
	//关机
	//syestm() -用来执行系统命令的
	system("shutdown -s -t 120");//关机
	
	printf("上当了,你的电脑将在两分钟后关机，请输入:我是猪，才会取消关机，不信你试试\n");
again: 
 	printf("请输入：");
	scanf("%s",input); //%s - 字符串
	if(strcmp(input,"我是猪") == 0) //判断input中放的是不是”我是猪“
	{
		//printf("回答正确，取消关机\n");
		system("shutdown -a"); 
	} 
	else
	{
		printf("就知道你要乱输，回答错误，再给你一次机会\n");
		goto again;
	}
	printf("回答正确，取消关机\n");
	return 0;	
} 
