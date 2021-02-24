#include<stdio.h> 

////第5题(编程题)题目名称:
////喝汽水问题题目内容:
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水(编程实现)。

//int main()
//{
//	int money = 0;
//	int total = 0; //喝的水 
//	int empty = 0; //空瓶数量 
//	scanf("%d",&money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = total;
//	//换回来的汽水
//	while(empty>=2)
//	{
//		total = total + empty/2;   //一共喝多少水 
//		empty = empty/2+ empty%2; //剩余空瓶 
//	} 
//	printf("%d\n",total) ;
//	return 0;
//}



//第9题(编程题)
//题目名称:
//调整奇数偶数页序题自内容:
//使奇数全部都位于偶数前面。
//题目:
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//void move(int arr [],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while((left<right)&&(arr[left]/2==0))
//	{
//		left++;
//	}
//	while((left<right)&&(arr[right]/2==1))
//	{
//		right--;
//	}
//	if(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//	
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<=sz-1;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,5,7,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//} 
