#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define N 6

//&	��λ��
//|	��λ��
////^	��λ���

//int main()
//{
//	��λ��:
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d", c);
//	00000000000000000000000000000011	a
//	00000000000000000000000000000101	b
//	00000000000000000000000000000001	a&b
//
//	��λ��
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	00000000000000000000000000000011	a
//	00000000000000000000000000000101	b
//	00000000000000000000000000000111	a|b
//
//	��������λ���
//	��ͬΪ0,����Ϊ1*/
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

//��һ�������洢�ڃȴ��еĶ�������1�ĸ���
//	����һ:	
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

//������
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

//������ - ���Ž�
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

//��Ŀ������
/*
int main()
{
	int a = 10;
	int* p = &a;//&��ȡ��ַ������
	*p;	//�����ò�����
	printf("%d", *p);
	return 0;
}*/

//sizeof��ȡ���������ռ�ȴ�ռ�Ĵ�С,��λ���ֽ�
/*
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));	//s�Ƕ�����,ֻ�ܴ�2���ֽ�
	printf("%d\n", s);	//s�����ﲻ��������

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
//	//(~)��������ȡ��
//	//00000000000000000000000000001011
//	//11111111111111111111111111110100 - ����
//	//11111111111111111111111111110011 - ����
//	//10000000000000000000000000001100 - ԭ��
//	printf("%d\n", ~a);
//}

//������ֻ�������׵�ַ
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
	//���߼���&&��߶�Ϊ�ٵ�ʱ��,�ұ߶�Ϊ��,��������
	i = a++ || ++b || d++;
	//���߼���||�������һ��Ϊ��ʱ���ұ߶�������

	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	return 0;
}*/

//�����ṹ��struct stu
/*
struct stu
{
	//��Ա����
	char name[20];
	int age;
	char sno[20];
};

int main()
{
	//ͨ��struct stu������һ��ѧ������s1,����ʼ��
	struct stu s1 = { "����",18,"2121013306" };
	struct stu* sp = &s1;

	printf("%s\n", sp->name);
	printf("%d\n", sp->age);
	printf("%s\n", sp->sno);
	//�ṹ��ָ��->��Ա��

	//printf("%s\n", (*sp).name);
	//printf("%d\n", (*sp).age);
	//printf("%s\n", (*sp).sno);

	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.sno);
	//�ṹ�����.��Ա��
}*/

//��ʽ����ת��

/*int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a

	char b = 127;
	//00000000000000000000000001111111
	//01111111 - b

	//a��b������
	//00000000000000000000000000000011 - a
	//00000000000000000000000001111111 - b
	//00000000000000000000000010000010 - c
	char c = a + b;
	//10000010 - c
	//11111111111111111111111110000010 - ����
	//11111111111111111111111110000001 - ����
	//10000000000000000000000001111110 - ԭ��
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
//int* p;  *p�ܷ���4���ֽ�
//char* p;  *p�ܷ���1���ֽ�

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

//	ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//char*���Ϳ�����һ���ֽ�
//
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	//int* ���ĸ��ֽ�
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;	
//	char* p = (char*)arr;
//	//��ʮ���ֽ�,charֻ���ƶ�10���ֽ�
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

//Ұָ��
	//δ��ʼ��
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;
//	*p = 20;
//	return 0;
//}

//ָ��Խ�����
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
//	//����ʱ,�ȴ��Ѿ���������ϵͳ�ˣ���ַ�ռ�����Ϊ��
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	//��ֵʱ��*p�ĵ�ַ��֪����˭
//
//	printf("%d", *p);
//	return 0;
//}

	//����Ұָ��
//ָ���ʼ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//��ʼ��
//
//	//int* p = NULL;//��ʼ��
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

//����ļӼ�������ַ�ļӼ�
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

//��׼�涨:����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ȴ�λ�ñȽϣ�����
//��������ָ���һ��Ԫ��֮ǰ���Ǹ��ȴ�λ�õ�ָ����бȽ�
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
//	//��һ�ָ���
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
//	printf("%p\n", arr);//��ַ-��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//��ַ-��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//���������ַ
//	printf("%p\n", &arr+1);
//
//	//��������
//	//1.&arr - &������ - ������������Ԫ�ص�ַ - ��������ʾ������������ - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ���������� - sizeof(������)��������������С
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//
//	return 0;
//}

//ָ������ - ���ָ��
//����ָ�� - �������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = {&a, &b, &c};//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", * (arr2[i]));
//	}
//	return 0;
//}

//ð������
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


//�ú���ʵ������Ԫ�ؽ���
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
//	printf("����ǰ:%d %d\n", a, b);
//	swap(&a,&b);
//	printf("����ǰ:%d %d\n", a, b);
//	return 0;
//}

//���齻��
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

//������int�͵Ķ����Ʊ����,�ж��ٸ�bitΪ��ͬ
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

//��ӡ�����������е�����λ��ż��λ
//void print(int a)
//{
//	int i = 0;
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ",(a >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ:\n");
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

//ģ��strlen�������������С
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

// ��ʹ�ÿ⺯�����������ַ�����������
//void swap(char arr[])
//{
//	//���ݹ鷽��
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
//	//���ݹ鷽����
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

//�õݹ�ʵ��n��k�η�
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
