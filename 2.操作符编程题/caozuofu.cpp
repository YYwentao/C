/////////////////////////统计二进制中1的个数 
#include <stdio.h> 
#include <stdlib.h>
//int count_bit_one(unsigned int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;	 
//	}
//	return count;
//}
 
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n=n&(n-1);//n与n-1每一次按位与后都会少个1，最后得到的n都是零，然后计数 
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	printf("请输入一个数:");
//	scanf("%d",&a); 
//	int count = count_bit_one(a);
//	
//	printf("count = %d\n",count); 
//	return 0;
//}


//第十题 
//题目名称:
//求二进制中不同位的个数题目
//内容:
//编程实现:两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同?
//int get_diff_bit(int m,int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	//int count_bit_one(int tmp);
//	while(tmp)
//	{
//		tmp=tmp&(tmp-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	int count = get_diff_bit(m,n);
//	printf("count=%d",count);
//	return 0;
//} 


//第11题(编程题)
//题目名称:
//打印二进制的奇数位和偶数位
//题目内容:
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d",(m>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for(i=31;i>0;i-=2)
//	{
//		printf("%d",(m>>i)&1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}


//第14题(编程题)
//题目名称:
//使用指针打印数组内容
//题目内容:
//写一个函数打E印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p + i));
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int sz =sizeof(arr)/sizeof( arr[0]);
	print(arr,sz);
	
	return 0;
}















