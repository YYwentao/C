#include<stdio.h> 
#include<string.h>
void reverse(char* left,char* right)
{
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse_string(char* str)
{
	char* left = str;
	char* right =str+strlen(str)-1;
	while(*str!='\0')
	{
		char* start = str;
		char* end  = str;
		while(*end!=' ' && *end!='\0')
		{
			end++;
		}
		reverse(start,end-1);
		if(*end = ' ')
		{
			str = end+1;
		}
		else
		{
			str = end;
		}
	}
	reverse(left,right);
}
int main()
{
	char arr[100] ="abc def ghi";
	//gets(arr);
	reverse_string(arr);
	printf("%s",arr);
	return 0;
} 
