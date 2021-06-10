#include <stdio.h>//标准输入输出
#include <stdlib.h>
#include <string.h>
//居然不需要导包, 并且导包后会报错: LNK2005 array 已经在 1_sizeof_test.obj中定义...
//#include "1_sizeof_test.c"
//#include "2_printf_test.c"
//#include "3_scanf_test.c"
//#include "4_for_sleep_test.c"
//#include "5_pointer_test.c"
//#include "6_swap_test.c"
//#include "7_plus_test.c"
//#include "8_pointer_array_test.c"
//#include "9_neicunsiqu_test.c"
//#include "10_struct_test.c"
//#include "11_union_test.c"
//#include "12_enum_test.c"
//#include "13_typeof_test.c"


void study() {
	printf("10.结构体(Java的Class), 要写到main()上方\n");
	printf("   结构体内不可以写函数(方法): void study() {}, 但可以写一个函数指针指向这个方法: void (*study)();\n");
	printf("   struct MyStruct boy = {23, 'M', 'A', study};//study()是一个MyStruct 结构体上方的函数\n");
	printf("   printf(\"boy.age = %%d\\n\", boy.age);//23\n");
	printf("   boy.study();//调用结构体里的函数指针\n");
	printf("10.1.使用一级结构体指针, 调用结构体里的函数指针:\n");
	printf("struct MyStruct* pboy = &boy;\n");
	printf("pboy -> study();\n");
	printf("\n");
}

struct MyStruct
{
	int age;
	char sex;
	char c;
	//void study() {}	//结构体内不可以写方法
	void (*study)();	//但可以写一个函数指针指向这个方法
};


//单行注释

/*
 * 块注释,可注释多行
*/

/*
 * 文件 -> 新建项目 -> Visual C++ -> Win32控制台应用程序(2017版:Windows桌面->Windows桌面向导) ->
 * 名称:day01 -> 位置:F:\workspace_cpp\ -> 确定 -> 下一步 ->
 * 控制台应用程序&空项目(手动√,否则有附加头文件,导致编译失败)&安全开发生命周期(SDL)检查 ->
 * 完成
 *
 * 源文件 -> 添加新项 -> C++ -> 名称:01.c
 *
 * 1.Visual Studio Code 开发C: https://www.zhihu.com/question/30315894
*/
/*int*/void main()
{
	int a = 3;
	int b = 5;

	struct MyStruct boy = { 23, 'M', 'A', study};

	//1.长度
	testSizeof(boy);
	printf("  结构体 boy 长度    = %d(int占4位, char占1位x2, 但由于'内存对齐', 所以占了8位.)\n", sizeof(boy));
	printf("\n");
	//2.输出格式
	printFormat();
	//3.键盘输入
	scanfInput();
	//4.for循环 & sleep()
	forSleep();
	//5.指针
	pointer();
	//6.值交换
	swap(&a, &b);
	a ^= b ^= a ^= b;			//值异或回来
	//7.利用指针让函数返回多个值
	plus(&a, &b);
	//8.数组入门 & 字符指针(字符串)
	array();
	//9.内存四驱
	neicunsiqu();
	//10.结构体
	boy.study();
	//testStruct(boy);
	//11.联合体
	unionTest();
	//12.枚举
	enumTest();
	//13.自定义类型
	customType();

	//win7编译器, 需要暂停, 否则黑框一闪而过
	system("pause");
	//return 0;
}
