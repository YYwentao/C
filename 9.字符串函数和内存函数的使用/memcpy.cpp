#include<stdio.h>
#include<string.h>
#include<assert.h>
struct s
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = dest; 
	assert(dest!=NULL);
	assert(src!=NULL);
	while(num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;//ʹ��++(char*)dest ,��ǿ������ת������һ��������������ʱ��������ʱ�Ӽ���û������� 
		src = (char*)src+1;	//��ֵ���ֵ����Ҫǿ������ת������Ϊʲô����ֵ�����ǿ��Դ洢���� 
	}
	
	return ret;
}

int main()
{
	int arr1[]  = {1,2,3,4,5};
	int arr2[5] = {0};
	struct s arr3[] = {{"����",20},{"����",30}};
	struct s arr4 [3]= {0};
	//memcpy(arr2,arr1,sizeof(arr1));
	//memcpy(arr4,arr3,sizeof(arr3)); 
	my_memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr4,arr3,sizeof(arr3));
	return 0;
} 
