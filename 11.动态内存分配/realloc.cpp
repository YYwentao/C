#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		perror("malloc");
		return 0;
	}
	//使用
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i) = i+1;
	}
	//realloc扩容调整空间
	int* p1 = (int*)realloc(p,20*sizeof(int));
	if(p1==NULL)
	{
		perror("realloc");
	}
	else
	{
		p = p1;//开辟成功后将p1指针首地址赋给p指针的首地址 
		p1=NULL; //不使用赋为空 
	}
	for(i=10;i<20;i++)//开辟了10个字节，p指针依旧指向为20个字节的首地址 
	{
		*(p+i) = i+1;//p[10]开始赋值，及第十一个字符 
	} 
	for(i=0;i<20;i++) 
	{
		printf("%d ",p[i]);
	}
	//释放 
	free(p);
	p=NULL;
	
	return 0;
} 
