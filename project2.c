#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
int check_sys()
{
	int a = 1;
	//int* p = (char*)&a;
	//����1��ʾС��
	//����0��ʾ���
	return *(char*)&a;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}