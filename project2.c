#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//www.stackoverflow.com
//www.segmentfault.com

//ϵͳ�ȴ濪�� :

//ջ�� :	�ֲ�����
//			��������ʽ����
//			��������Ҳ���ٿռ�
//
//���� :	��̬�ڴ����
//			malloc/free
//			realloc
//			calloc
//
//��̬�� :	ȫ�ֱ���
//			��̬����


//struct �ṹ��ؼ���  stu - �ṹ���ǩ  struct stu - �ṹ������ 
//struct stu
//{
//	char ����[20];
//	short ����;
//	char �绰[12];
//	char �Ա�[5];
//}s1, s2, s3;//s1,s2,s3������ȫ�ֵĽṹ�����

////typedef - ���¶�������
//typedef struct stu
//{
//	char ����[20];
//	short ����;
//	char �绰[12];
//	char �Ա�[5];
//}stu;
//
//int main()
//{
//	//struct stu s;//�ֲ�����
//	stu s1 = {"����",19,"15121633656","��"};
//	printf("%s %d %s %s", s1.����, s1.����, s1.�绰, s1.�Ա�);
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
//	struct S s;//�ṹ���Ƕ��
//	char* pc;
//};
//
//int main()
//{
//	char a = 10;
//	struct T t = { "ţ��",{100,'a',"hellowold!",3.14},&a};
//
//	//�ṹ���Ա�ķ��� - (.) �ʹ�ӡ 
//	printf("%s\n", t.ch);//ţ��
//	printf("%d\n", t.s.a);//100
//	printf("%s\n", t.s.arr);//hellowold!
//	printf("%lf\n", t.s.d);//3.14
//	printf("%p\n", t.pc);//a�ĵ�ַ
//	return 0;
//}

//typedef struct stu
//{
//	char ����[20];
//	short ����;
//	char �绰[12];
//	char �Ա�[5];
//};

//void print1(stu tmp)
//{
//	printf("����: %s\n", tmp.����);
//	printf("����: %d\n", tmp.����);
//	printf("�绰: %s\n", tmp.�绰);
//	printf("�Ա�: %s\n", tmp.�Ա�);
//}

//void print2(stu* ps)
//{
//	printf("����: %s\n", ps->����);
//	printf("����: %d\n", ps->����);
//	printf("�绰: %s\n", ps->�绰);
//	printf("�Ա�: %s\n", ps->�Ա�);
//}

//int main()
//{
//	stu s1 = { "����",18,"1512345678","��" };
//	//�ṹ�崫��
//	print1(s1);
//	print2(&s1);
//	return 0;
//}

//7_12
// �����ڃȴ��е��ֽڱ����Ϊ�� ��С��
// ���(�洢)ģʽ�����ݵĵ͵�ַ�����ڃȴ��еĸߵ�ַ�У���֮һ��
// С��(�洢)ģʽ�����ݵĵ͵�ַ�����ڃȴ��еĵ͵�ַ�У���֮һ��

//дһ�������жϵ�ǰ�������ֽ���
//int check_sys()
//{
//	int a = 1;
//	//int* p = (char*)&a;
//	//����1��ʾС��
//	//����0��ʾ���
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//7_13
// charȡֵ��Χ��-128 -- 127,unsigned char��0 -- 255
//����
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
//�������������float,double,long double 
// ˵�����ͺ͸����ʹ洢��ʽ��ͬ
//int main()
//{
//	int n = 9;
//	//����00000000 00000000 00000000 00001001
//	//�������洢0 00000000 00000000000000000001001
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
//	//תΪ����01000000 10001000 00000000 00000000  --1091,567,616
//	printf("%f\n", *pfloat);
//	return 0;
//}

//��ѧ������(-1)^s * M * 2^E 
//s=0Ϊ��,1Ϊ��
//float����EҪ����127,double��1023

//int main()
//{
//	float f = 5.5;
//	//������101.1
//	//(-1) ^ 0 * 1.011 * 2 ^ 2
//	//s = 0
//	//M = 1.011
//	//E = 2
//	//0 10000001 01100000000000000000000000
//	//1������λ 8����E 23����M
//	return 0;
//}

//32λ������4���ֽ�,ָ���СΪ4��
//64λ������8���ֽ�,ָ���СΪ8;
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
//	//const�������γ���
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//p������׵�ַa
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
//	char* p1 = { "hello wangdefa" }; //��Ϊchar*��СΪ4���ַ�����СΪ7���Ų������԰��ַ�����������
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

//ţ����ˮƿ--������
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