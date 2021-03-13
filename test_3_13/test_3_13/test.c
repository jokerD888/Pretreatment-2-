#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//命令行定义
//许多C的编译器提供了一种能力, 允许在命令行中定义符号。用于启动编译过程。
//例如 :当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。
//(假定某个程序中声明了一个某个长度的数组 ，如果机器内存有限，我们需要一个很小的数组 ，
//但是另外一一个机器内存大写，我们需要一个数组能够大写。)


//条件编译
// 
//调试性的代码，删除可惜，保留又碍事，所以可以选择性的编译
#define DEBUG
///1.
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1//常量表达式
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
//2.多个分支的条件编译
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
//3.判断是否被定义
//#if defined(symbol) 等同于 #ifdef symbol
//#if !defined(symbol) 等同于 #ifndef symbol
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
//4.嵌套编译
//类似if elseif 


//头文件被包含的方式:
//本地文件包含
//#include "filename"
//查找策略 : 先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件 - 样在标准位置查找头文件。
//如果找不到就提示编译错误。 linux环境的标准头文件的路径 :/ usr / include
//VS环境的标准头文件的路径 :C:\Program Files(x86)\Microsoft visual Studio 9.0\vc\include(根据自己的安装路径查找）
//库文件包含
//#include <filename.h>
//查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。
//可以说，对于库文件也可以使用“”的形式包含?
//答案是肯定的，可以。但是这样做查找的效率就低些，当然这样也不容易区分是库文件还是本地文件了。

//避免头文件被多次包含（见test.h)
//答案：条件编译
//#ifndef __TEST_H__
//#define __TEST_H__
//头文件内容
//#endif
//或者
//#pragma once 
//头文件内容
//此法为新出用法，部分编译器可能无法理解
// 
//#include"test.h"
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//}

//编写宏，计算结构体中某变量相对于首地址的偏移
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