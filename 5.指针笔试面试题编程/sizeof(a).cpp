#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int a[3][4] = {0};
	printf( "%p\n", &a[0][0]);
	printf( "%p\n", a[0] + 1);
	
	printf( "%d\n", sizeof(a)); //48
	printf( "%d \n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�������������
	///sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));
	//4 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
	//����a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ-��ַ��С��4/8���ֽ� 
	printf( "%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n",(*(a[0] + 1))); 
	
	printf( "%d \n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf( "%d \n", sizeof(&a[0] +1));
	printf( "%d\n", sizeof(*(&a[0] +1)));
	printf( "%d \n", sizeof(*a) );
	printf( "%d \n", sizeof(a[3]));
		
	return 0;
	
}
