#include<stdio.h>
#include<stdlib.h>
//��6�⣨�����)
//��Ŀ����:
//�˷��ھ�����Ŀ����:
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//��:����9�����9*9�ھ������12�����12*12�ĹԷ��ھ���
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


//��10�⣨(�����)
//��Ŀ����:
//�ַ�������(�ݹ�ʵ��)
//��Ŀ����:
//��дһ������reverse_string(char * string)(�ݹ�ʵ��)ʵ��:�������ַ����е��ַ��������С�
//Ҫ��:����ʹ��C�������е��ַ�������������
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
//�ݹ���� 
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



//��11�⣨�����)
//��Ŀ����:
//����һ������ÿλ֮��(�ݹ�ʵ��)
//��Ŀ����:
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//����:1729�����:19
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


//��12��(�����)
//��Ŀ����:
//�ݹ�ʵ��n��k�η�
//��Ŀ����:
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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



//��13��(�����)
//��Ŀ����:
//����쳲�������
//��Ŀ����:
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//����:
//�����5�����:l5
//�����10�����:55
//�����2�����:1









