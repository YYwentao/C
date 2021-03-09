#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dest,const void* src,size_t num)
{
	void* ret = dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	if(dest < src)
	{
		//ǰ->�� 
		while(num--)
		{
			*(char*)dest = *(char*)src;
			src = (char*)src+1;
			dest = (char*)dest+1; 
		}
	}
	else
	{
		//��->ǰ 
		while(num--)
		{
			*((char*)dest+num) = *((char*)src+num);//�����䣬��Ҫ���ڴ沼�� 
		}
	}
	return ret;
}
int main()
{
	int arr[]  = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	my_memmove(arr,arr+2,5*4);
	//memmove(arr+2,arr,5*4);
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
} 
