#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//系统內存开辟 :

//栈区 :	局部变量
//			函数的形式参数
//			函数调用也开辟空间
//
//堆区 :	动态内存分配
//			malloc/free
//			realloc
//			calloc
//
//静态区 :	全局变量
//			静态变量
	

//struct 结构体关键字  stu - 结构体标签  struct stu - 结构体类型 
//struct stu
//{
//	char 名字[20];
//	short 年龄;
//	char 电话[12];
//	char 性别[5];
//}s1, s2, s3;//s1,s2,s3是三个全局的结构体变量

////typedef - 重新定义名字
//typedef struct stu
//{
//	char 名字[20];
//	short 年龄;
//	char 电话[12];
//	char 性别[5];
//}stu;
//
//int main()
//{
//	//struct stu s;//局部变量
//	stu s1 = {"刘坚",19,"15121633656","男"};
//	printf("%s %d %s %s", s1.名字, s1.年龄, s1.电话, s1.性别);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//结构体的嵌套
//	char* pc;
//};
//
//int main()
//{
//	char a = 10;
//	struct T t = { "牛逼",{100,'a',"hellowold!",3.14},&a};
//
//	//结构体成员的访问 - (.) 和打印 
//	printf("%s\n", t.ch);//牛逼
//	printf("%d\n", t.s.a);//100
//	printf("%s\n", t.s.arr);//hellowold!
//	printf("%lf\n", t.s.d);//3.14
//	printf("%p\n", t.pc);//a的地址
//	return 0;
//}

//typedef struct stu
//{
//	char 姓名[20];
//	short 年龄;
//	char 电话[12];
//	char 性别[5];
//};

//void print1(stu tmp)
//{
//	printf("姓名: %s\n", tmp.姓名);
//	printf("年龄: %d\n", tmp.年龄);
//	printf("电话: %s\n", tmp.电话);
//	printf("性别: %s\n", tmp.性别);
//}

//void print2(stu* ps)
//{
//	printf("姓名: %s\n", ps->姓名);
//	printf("年龄: %d\n", ps->年龄);
//	printf("电话: %s\n", ps->电话);
//	printf("性别: %s\n", ps->性别);
//}

//int main()
//{
//	stu s1 = { "张三",18,"1512345678","男" };
//	//结构体传参
//	print1(s1);
//	print2(&s1);
//	return 0;
//}

//7_12
// 数据在內存中的字节保存分为： 大小端
// 大端(存储)模式：数据的低地址保存在內存中的高地址中，反之一样
// 小端(存储)模式：数据的低地址保存在內存中的低地址中，反之一样

//写一个程序判断当前机器的字节序
int check_sys()
{
	int a = 1;
	//int* p = (char*)&a;
	//返回1表示小段
	//返回0表示大端
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}