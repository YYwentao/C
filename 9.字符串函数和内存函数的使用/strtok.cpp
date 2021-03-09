//strtok---切割字符串 ，会用就行 
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[] = "1938145653@qq.com";
	char* p = "@.";
	
	char buf[1024] = {0};
	strcpy(buf,arr);
	
	char* ret = NULL;
	for( ret=strtok(buf,p); ret!=NULL; ret = strtok(NULL,p))//函数带有记忆能力，含有静态变量。第二次字符串起始位置为空，记忆空的位置。 
	{
		printf("%s\n",ret);
	} 
	
	return 0;
}
