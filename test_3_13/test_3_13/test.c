#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ж���
//���C�ı������ṩ��һ������, �������������ж�����š���������������̡�
//���� :�����Ǹ���ͬһ��Դ�ļ�Ҫ�������ͬ��һ������Ĳ�ͬ�汾��ʱ����������е��ô���
//(�ٶ�ĳ��������������һ��ĳ�����ȵ����� ����������ڴ����ޣ�������Ҫһ����С������ ��
//��������һһ�������ڴ��д��������Ҫһ�������ܹ���д��)


//��������
// 
//�����ԵĴ��룬ɾ����ϧ�������ְ��£����Կ���ѡ���Եı���
#define DEBUG
///1.
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1//�������ʽ
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
// 
//2.�����֧����������
//int main(void)
//{
//#if 1==2
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#else
//	printf("wowo\n");
//#endif
//	return 0;
//}
// 
//3.�ж��Ƿ񱻶���
//#if defined(symbol) ��ͬ�� #ifdef symbol
//#if !defined(symbol) ��ͬ�� #ifndef symbol
//int main(void)
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
// 
////#ifdef DEBUG
////	printf("haha\n");
////#endif
//
//
////#if !defined(DEBUG)
////	printf("hehe\n");
////#endif
//
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//
//	return 0;
//}
//4.Ƕ�ױ���
//����if elseif 


//ͷ�ļ��������ķ�ʽ:
//�����ļ�����
//#include "filename"
//���Ҳ��� : ����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ� - ���ڱ�׼λ�ò���ͷ�ļ���
//����Ҳ�������ʾ������� linux�����ı�׼ͷ�ļ���·�� :/ usr / include
//VS�����ı�׼ͷ�ļ���·�� :C:\Program Files(x86)\Microsoft visual Studio 9.0\vc\include(�����Լ��İ�װ·�����ң�
//���ļ�����
//#include <filename.h>
//����ͷ�ļ�ֱ��ȥ��׼·����ȥ���ң�����Ҳ�������ʾ�������
//����˵�����ڿ��ļ�Ҳ����ʹ�á�������ʽ����?
//���ǿ϶��ģ����ԡ��������������ҵ�Ч�ʾ͵�Щ����Ȼ����Ҳ�����������ǿ��ļ����Ǳ����ļ��ˡ�

//����ͷ�ļ�����ΰ�������test.h)
//�𰸣���������
//#ifndef __TEST_H__
//#define __TEST_H__
//ͷ�ļ�����
//#endif
//����
//#pragma once 
//ͷ�ļ�����
//�˷�Ϊ�³��÷������ֱ����������޷����
// 
//#include"test.h"
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//}

//��д�꣬����ṹ����ĳ����������׵�ַ��ƫ��
#include<stddef.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
struct S
{
	char c1;
	int a;
	char c2;

};
int main(void)
{
	struct S s;
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, c2));

	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}