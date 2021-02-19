#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int a[3][4] = {0};
	printf( "%p\n", &a[0][0]);
	printf( "%p\n", a[0] + 1);
	
	printf( "%d\n", sizeof(a)); //48
	printf( "%d \n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行做为一维数组的数组名，
	///sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	printf("%d\n", sizeof(a[0] + 1));
	//4 - a[0]是第一行的数组名，数组名此时是首元素的地址，其实就是第一行第一个元素的地址
	//所以a[0]+1就是第一行第二个元素的地址-地址大小是4/8个字节 
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
