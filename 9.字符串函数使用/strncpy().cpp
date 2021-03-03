#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncpy(char* str1,const char* str2,int k)
{
	assert(str1);
	assert(str2);
	int i=0;
	char* ret = str1;
	for(i=0;i<k;i++)
	{
		*str1 =*str2;
		str1++;
		str2++;
	}
	return ret;
}
int main()
{
	char arr1[10] ="abcdefg";
	char arr2[] = "bit";
	my_strncpy(arr1,arr2,4);//
	//strncpy(arr1,arr2,3);
	printf("%s\n",arr1);
	return 0;
} 
