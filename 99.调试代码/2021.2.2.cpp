//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=0;i<101;i++)
//	{
//		printf("%3d",i);
//	}
//	return 0;
//}

//F5-启动调试，与断点配合使用 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//		printf("haha\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[10]={0};
	int i = 0;
	for(i=0;i<10;i++)
	{
		arr[i]= i;
		printf("%d",arr[i]);
	} 
	
	return 0;
}



