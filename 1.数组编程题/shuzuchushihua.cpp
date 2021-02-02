#include<stdio.h> 
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	} 
//} 
//void Reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right) 
//	{
//		int tmp = arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz); 	//初始化数组为0 
//	Print(arr,sz);	//打印数组 
//	Reverse(arr,sz);	//实现交换 
//	Print(arr,sz);	

//	return 0;

//}

int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<sz;i++)
	{
		tmp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tmp;
		printf("%d",arr1[i]);
	}

	return 0;
}





















