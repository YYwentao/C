#include<stdio.h>
 
struct S
{
	int a;
	char c;
	double d;
}; 

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c ='w';
	ps->d =3.14;
}

//void print(struct S tmp)
//{
//	printf("%d %c %lf",tmp.a,tmp.c,tmp.d);
//}
void print1(const struct S* ps)
{
	printf("%d %c %lf",ps->a,ps->c,ps->d);
}


int main()
{
	struct S s = {0};
	Init(&s);
	//print(s);
	print1(&s); //传参最好传结构体地址 
//	struct S s ={100,'w',3.14};
//	printf("%d %c %lf\n",s.a,s.c,s.d);//%s为字符串，%c为字符 
	return 0;
} 
