#include<stdio.h>
#include<string.h>
//第2题(编程题)
//题目名称:
//字符串旋转结果
//题目内容:
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如:给定s1=AABCD和s2= BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//void left_move(char* arr,int k){
//	int len = strlen(arr);
//	int i = 0;
//	for(i=0;i<k;i++)
//	{
//	  ////左旋一个字符
//		//第一步
//		char tmp =*arr;
//		//第二步 
//		int j = 0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);
//		}
//		//第三步
//		*(arr+len-1)=tmp;
//	}
//}
//int is_left_move(char* s,char* t){
//	int len = strlen(s);
//	int i = 0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s,1);
//		int ret = strcmp(s,t);
//		if(ret==0)
//		return 1;
//	}
//	return 0;
//}

//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1!=len2)
//		return 0;
//	//1.在str1里面追加一个str1
//	//str(str1,str1)  err 
//	strncat(str1,str1,6);//AABCDAABCD
//	//判断str2指向的字符串是否是str1指向的字符串 
//	//strstr-找字串
//	char* ret = strstr(str1,str2);
//	if(ret == NULL)
//	{
//		return 0;
//	} 
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char s1[30] = "AABCD";
//	char s2[] = "ABCDA";
//	int ret = is_left_move(s1,s2);
//	if(ret==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//} 

//剑指offer
//题目名称:
//杨氏矩阵
//题目内容:
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求:时间复杂度小于O(N);
int FindSum(int arr[3][3],int k,int* row,int* col)
{
	int x = 0;
	int y = *col-1;
	
	while(x<=*row-1&&y>=0)
	{
		if(arr[x][y]>k)
		{
			y--;
		}
		else if(arr[x][y]<k)
		{
			x++;
		}
		else
		{
			*row=x;
			*col=y;
			return 1;
		}
	}
	//找不到
	return 0; 
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	int x = 3;
	int y = 3;
	//返回形参数 
	int ret = FindSum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n",x,y);
	}
	else
	{
		printf("找不到\n");
	} 
	return 0;
}





