#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//www.stackoverflow.com
//www.segmentfault.com

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
//int check_sys()
//{
//	int a = 1;
//	//int* p = (char*)&a;
//	//返回1表示小段
//	//返回0表示大端
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//7_13
// char取值范围是-128 -- 127,unsigned char是0 -- 255
//做题
//1.
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
// return 0;
//}

//2.
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("Hello,World\n");
//	}
//	return 0;
//}

//7_14
//浮点数家族包括float,double,long double 
// 说明整型和浮点型存储方式不同
//int main()
//{
//	int n = 9;
//	//补码00000000 00000000 00000000 00001001
//	//浮点数存储0 00000000 00000000000000000001001
//
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	//(-1)^0 * 00000000000000000001001^-126    ---0
//	
//	* pfloat = 9.0;
//	//1001
//	//(-1)^0 * 1.001 * 2^3   E=3+127=130
//	//0 10000010 00100000000000000000000
//	
//	printf("%d\n", n);
//	//转为整型01000000 10001000 00000000 00000000  --1091,567,616
//	printf("%f\n", *pfloat);
//	return 0;
//}

//科学计数法(-1)^s * M * 2^E 
//s=0为正,1为负
//float类型E要加上127,double加1023

//int main()
//{
//	float f = 5.5;
//	//二进制101.1
//	//(-1) ^ 0 * 1.011 * 2 ^ 2
//	//s = 0
//	//M = 1.011
//	//E = 2
//	//0 10000001 01100000000000000000000000
//	//1个符号位 8个存E 23个存M
//	return 0;
//}

//32位电脑是4个字节,指针大小为4；
//64位电脑是8个字节,指针大小为8;
//void test(int arr[])
//{
//	printf("%d", sizeof(arr) / sizeof(arr[0]));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	//const可以修饰常量
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//p存的是首地址a
//
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//7_30

//int main()
//{
//	char arr1[] = { "hello wangdefa" };
//	char arr2[] = { "hello wangdefa" };
//	char* p1 = { "hello wangdefa" }; //因为char*大小为4，字符串大小为7，放不下所以把字符串看作常量
//	char* p2 = { "hello wangdefa" };
//	if (arr1 == arr2)
//	{
//		printf("hehe ");
//	}
//	else
//	{
//		printf("haha ");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe ");
//	}
//	else
//	{
//		printf("haha ");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//牛客汽水瓶--做错了
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//
//		a += n / 3;
//		b = n % 3;
//		n = n/3 + b;
//		if (n <= 1)
//		{
//			printf("%d ", a);
//		}
//		else if (n == 2)
//		{
//			printf("%d ", a+1);
//		}
//	}
//	
//	return 0;
//} 