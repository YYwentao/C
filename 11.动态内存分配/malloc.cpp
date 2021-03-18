#include<stdio.h>
#include<stdlib.h>
int main()
{
	//动态内存分配 
	int* p = (int*)malloc(100);//申请100个字节强制转换为int型，p指针指向首地址 
	if(p==NULL)
	{
		perror("malloc");
	}
	else
	{
		int i = 0;
		for(i=0;i<25;i++)
		{
			*(p+i) = i;
			printf("%d ",*(p+i)); 
		}
		//释放空间 
		free(p);
		p=NULL;
	} 
	return 0;
} 


