/////////////////////////ͳ�ƶ�������1�ĸ��� 
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
//		n=n&(n-1);//n��n-1ÿһ�ΰ�λ��󶼻��ٸ�1�����õ���n�����㣬Ȼ����� 
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	printf("������һ����:");
//	scanf("%d",&a); 
//	int count = count_bit_one(a);
//	
//	printf("count = %d\n",count); 
//	return 0;
//}


//��ʮ�� 
//��Ŀ����:
//��������в�ͬλ�ĸ�����Ŀ
//����:
//���ʵ��:����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ?
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


//��11��(�����)
//��Ŀ����:
//��ӡ�����Ƶ�����λ��ż��λ
//��Ŀ����:
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void print(int m)
//{
//	int i = 0;
//	printf("����λ:");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d",(m>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ:");
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


//��14��(�����)
//��Ŀ����:
//ʹ��ָ���ӡ��������
//��Ŀ����:
//дһ��������Eӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
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















