#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 6

//&	按位与
//|	按位或
////^	按位异或

//int main()
//{
//	按位与:
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d", c);
//	00000000000000000000000000000011	a
//	00000000000000000000000000000101	b
//	00000000000000000000000000000001	a&b
//
//	按位或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	00000000000000000000000000000011	a
//	00000000000000000000000000000101	b
//	00000000000000000000000000000111	a|b
//
//	按二进制位异或
//	相同为0,相异为1*/
//	int a = 3;
//	int b = 5;
//	int c = a ^ b; 
//	00000000000000000000000000000011	a
//	00000000000000000000000000000101	b
//	00000000000000000000000000000110	a^b
//	printf("%d\n", c);
//}

/*char** fizzBuzz(int n, int* returnSize)
{
	*returnSize = n;
	int i = 0;
	char* arr = (char*)malloc(sizeof(char) * 9 * n);
	char* *string = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++)
	{
		string[i] = &arr[9 * i];
	}

	for (i = 1; i <= n; i++)
	{
		if (i / 3 == 0 && i / 5 == 0)
		{
			strcpy(string[i - 1], "FizzBuzz");
		}
		else if (i / 3 == 0)
		{
			strcpy(string[i - 1], "Fizz");
		}
		else if (i / 5 == 0)
		{
			strcpy(string[i - 1], "Buzz");
		}
		else
		{
			sprintf(string[i - 1],"%d", i);
		}
	}
	return string;
}

int main()
{
	int n;
	int* returnSize;
	scanf("%d", n);
	int p = **fizzBuzz(n, returnSize);
	printf("%d", p);
}*/

//求一个整数存储在內存中的二进制中1的个数
//	方法一:	
//int count1(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			num = num / 2;
//			count++;
//		}
//	}
//	return count;
//}

//方法二
//int count1(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法三 - 最优解
//int count1(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & num - 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{ 
//	int num = 0;
//	scanf("%d", &num);
//	int sum = count1(num);
//	printf("count = %d\n", sum);
//	
//	//printf("%d\n", count);
//	return 0;
//}

//单目操作符
/*
int main()
{
	int a = 10;
	int* p = &a;//&是取地址操作符
	*p;	//解引用操作符
	printf("%d", *p);
	return 0;
}*/

//sizeof是取计算变量所占內存空间的大小,单位是字节
/*
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));	//s是短整形,只能存2个字节
	printf("%d\n", s);	//s在这里不参与运算

	//int a = 10;
	char b = 'n';
	char* c = &b;
	int arr[10] = {};

	printf("%d\n", sizeof(a));		//4
	printf("%d\n", sizeof(int));	//4

	printf("%d\n", sizeof(b));		//1
	printf("%d\n", sizeof(char));	//1

	printf("%d\n", sizeof(c));		//8
	printf("%d\n", sizeof(char*));	//8

	printf("%d\n", sizeof(arr));	//40
	printf("%d\n", sizeof(int [10]));//40 
	return 0;
}*/

//int main()
//{
//	int a = 11;
//	//(~)按二进制取反
//	//00000000000000000000000000001011
//	//11111111111111111111111111110100 - 补码
//	//11111111111111111111111111110011 - 反码
//	//10000000000000000000000000001100 - 原码
//	printf("%d\n", ~a);
//}

//传数组只传数组首地址
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	test1(arr);
//	test2(ch);
//	return 0;
//}

/*
int main()
{
	int i = 0;
	int a = 1; 
	int b = 2;
	int c = 3; 
	int d = 4;

	i = a++ && ++b && d++;
	//当逻辑与&&左边都为假的时候,右边都为假,都不运算
	i = a++ || ++b || d++;
	//当逻辑非||，左边有一个为真时，右边都不运算

	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	return 0;
}*/

//创建结构体struct stu
/*
struct stu
{
	//成员变量
	char name[20];
	int age;
	char sno[20];
};

int main()
{
	//通过struct stu创建了一个学生变量s1,并初始化
	struct stu s1 = { "张三",18,"2121013306" };
	struct stu* sp = &s1;

	printf("%s\n", sp->name);
	printf("%d\n", sp->age);
	printf("%s\n", sp->sno);
	//结构体指针->成员名

	//printf("%s\n", (*sp).name);
	//printf("%d\n", (*sp).age);
	//printf("%s\n", (*sp).sno);

	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.sno);
	//结构体变量.成员名
}*/

//隐式类型转换

/*int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a

	char b = 127;
	//00000000000000000000000001111111
	//01111111 - b

	//a和b如何相加
	//00000000000000000000000000000011 - a
	//00000000000000000000000001111111 - b
	//00000000000000000000000010000010 - c
	char c = a + b;
	//10000010 - c
	//11111111111111111111111110000010 - 补码
	//11111111111111111111111110000001 - 反码
	//10000000000000000000000001111110 - 原码
	// - 126

	printf("%d\n", c);
	return 0;
}*/

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	int a = 0x11223344;
// 
//	int* pa = &a; 
//	char* pc = (char *) & a;
//int* p;  *p能访问4个字节
//char* p;  *p能访问1个字节

//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	int* pa = &a;
//	*pc = 0;
//	*pa = 0;
//	return 0;
//}

//	指针的类型决定了指针向前或者向后走一步有多大（距离）
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//char*类型可以走一个字节
//
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	//int* 走四个字节
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;	
//	char* p = (char*)arr;
//	//四十个字节,char只能移动10个字节
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		//printf(" %p ", *p);
//	}
//
//	return 0;
//}

//野指针
	//未初始化
//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;
//	*p = 20;
//	return 0;
//}

//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = 1;
//	}
//	printf("%d", *p);
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//
//	return &a;
//	//返回时,內存已经还给操作系统了，地址空间里面为空
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	//赋值时，*p的地址不知道是谁
//
//	printf("%d", *p);
//	return 0;
//}

	//避免野指针
//指针初始化
//int main()
//{
//	int a = 10;
//	int* p = &a;//初始化
//
//	//int* p = NULL;//初始化
//	printf("%d", *p);
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//数组的加减法，地址的加减
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//char my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//标准规定:允许指向数组元素的指针与指向数组最后一个元素后面的那个內存位置比较，但是
//不允许与指向第一个元素之前的那个內存位置的指针进行比较
//#define num 5
//int main()
//{
//	float values[num];
//	float* p;
//
//	for (p = &values[num]; p > &values[0];)
//	{
//		*--p = 0;
//	}
//	printf("%f\n",*p);
//	//第一种更好
//
//	for (p = &values[num - 1]; p >= &values[0];p--)
//	{
//		*p = 0;
//	}
//	printf("%f\n",*p);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//地址-首元素地址
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//整个数组地址
//	printf("%p\n", &arr+1);
//
//	//两种列外
//	//1.&arr - &数组名 - 数组名不是首元素地址 - 数组名表示的是整个数组 - &数组名 取出的是整个数组的地址
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的整个数组 - sizeof(数组名)计算的整个数组大小
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//
//	return 0;
//}

//指针数组 - 存放指针
//数组指针 - 存放数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = {&a, &b, &c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", * (arr2[i]));
//	}
//	return 0;
//}

//冒泡排序
//int main()
//{
//	int i,j,a[N];
//
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < N; i++)
//	{
//		int j = 0;
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (a[j] > a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%4d", a[i]);
//	}
//	printf("\n");
//	return 0;
//}


//用函数实现数组元素交换
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reserve(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int tmp = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,5,74,3,5,8,3,4,8,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	Reserve(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//void swap(int* x,int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 20, b = 10;
//	printf("交换前:%d %d\n", a, b);
//	swap(&a,&b);
//	printf("交换前:%d %d\n", a, b);
//	return 0;
//}

//数组交换
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	/*printf("%d\n", arr1);
//	printf("%d\n", arr2);*/
//	return 0;
//}

//求两个int型的二进制表达中,有多少个bit为不同
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_count(int x, int y)
//{
//	int tmp = x ^ y;
//	return count_bit(tmp);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	int count = get_count(a, b);
//	printf("count = %d\n", count);
//	return 0;
//}

//打印二进制序列中的奇数位和偶数位
//void print(int a)
//{
//	int i = 0;
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ",(a >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//模拟strlen函数计算数组大小
//int my_strlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

// 不使用库函数，将数组字符串反向排序
//void swap(char arr[])
//{
//	//不递归方法
//
//	/*int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}*/
//
//	//《递归方法》
//
//	int len = my_strlen(arr);
//	int tmp = arr[0];
//
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//
//	if (my_strlen(arr) >= 2)
//	{
//		swap(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	swap(arr);
//	printf("%s", arr);
//	return 0;
//}

//用递归实现n的k次方
//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1 / pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	double num = pow(n, k);
//	printf("%lf", num);
//	return 0;
//}
