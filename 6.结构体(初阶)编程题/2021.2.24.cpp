#include<stdio.h> 

////��5��(�����)��Ŀ����:
////����ˮ������Ŀ����:
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ(���ʵ��)��

//int main()
//{
//	int money = 0;
//	int total = 0; //�ȵ�ˮ 
//	int empty = 0; //��ƿ���� 
//	scanf("%d",&money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = total;
//	//����������ˮ
//	while(empty>=2)
//	{
//		total = total + empty/2;   //һ���ȶ���ˮ 
//		empty = empty/2+ empty%2; //ʣ���ƿ 
//	} 
//	printf("%d\n",total) ;
//	return 0;
//}



//��9��(�����)
//��Ŀ����:
//��������ż��ҳ����������:
//ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ:
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
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
