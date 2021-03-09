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
		dest = (char*)dest+1;//使用++(char*)dest ,先强制类型转换后变成一个常量，就是临时变量，临时加加是没有意义的 
		src = (char*)src+1;	//赋值后的值不需要强制类型转换，因为什么样的值它都是可以存储的嘛 
	}
	
	return ret;
}

int main()
{
	int arr1[]  = {1,2,3,4,5};
	int arr2[5] = {0};
	struct s arr3[] = {{"张三",20},{"李四",30}};
	struct s arr4 [3]= {0};
	//memcpy(arr2,arr1,sizeof(arr1));
	//memcpy(arr4,arr3,sizeof(arr3)); 
	my_memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr4,arr3,sizeof(arr3));
	return 0;
} 
