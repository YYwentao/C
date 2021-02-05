#include<stdio.h>
#include<stdlib.h>
//第6题（编程题)
//题目名称:
//乘法口诀表题目内容:
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如:输入9，输出9*9口诀表，输出12，输出12*12的乖法口诀表。
//void print_table(int n)
//{
//	int i = 0;
//	for(i=1;i<=n;i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}


//第10题（(编程题)
//题目名称:
//字符串逆序(递归实现)
//题目内容:
//编写一个函数reverse_string(char * string)(递归实现)实现:将参数字符串中的字符反向排列。
//要求:不能使用C函数库中的字符串操作函数。
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//		while(*str !='\0')
//		{
//			count++;
//			str++;
//		}
//		return count;
//} 
//void reverse_string(char *arr)
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while(left<right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	} 
//}
//递归调用 
//void reverse_string(char* arr)
//{
//	char tmp = 0;
//	tmp = arr[0];
//	int len = my_strlen(arr); 	
//	arr[0] =arr[len-1];
//	arr[len-1] = '\0';
//	if((my_strlen(arr+1))>=2)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len-1] = tmp; 
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}



//第11题（编程题)
//题目名称:
//计算一个数的每位之和(递归实现)
//题目内容:
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入:1729，输出:19
//int Digitsum( unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum( num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1729
//	int ret = Digitsum( num);
//	printf( "ret = %d\n", ret);
//	return 0;
//}


//第12题(编程题)
//题目名称:
//递归实现n的k次方
//题目内容:
//编写一个函数实现n的k次方，使用递归实现。
//double Pow(int n,int k)
//{
//	//n^k=n*n^(k-1)
//	if(k<0)
//	{
//		return (1.0/(Pow(n,-k)));
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n,k-1);
//	}
//}
//int main()
//{
//	int n =0;
//	int k =0;
//	scanf("%d%d",&n,&k);
//	double ret = Pow(n,k);
//	printf("ret=%lf\n",ret);
//	
//	return 0;
//}



//第13题(编程题)
//题目名称:
//计算斐波那契数
//题目内容:
//递归和非递归分别实现求第n个斐波那契数
//例如:
//输入∶5，输出:l5
//输入∶10，输出:55
//输入∶2，输出:1









