#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret*= j;
//		}
//		sum += ret;
//	}
//printf( "%d \n", sum) ;return 0;
//}

////1到10的阶乘之和 
//int main()
//{
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for(i=1;i<=10;i++)
//	{
//		a=a*i;
//		sum = sum+a;
//	}
//	printf("%d",sum);
//	return 0;
//}


//建立函数实现字符串拷贝 
#include<string.h>
void my_strcpy(char* dest,char* src)
{
	while(*src !='\0')
	{
		*dest = *src;
		src++;
		dest++;
	} 
	*dest = *src;
}
int main()
{
	char arr1[]="############";
	char arr2[]="bit";
	//strcpy字符串拷贝 
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}







