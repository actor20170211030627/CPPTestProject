

/**
 * 13.11_指针快速入门
 * 什么是指针(重要)
 * 又称 '指针变量': 用来存储某种数据在内存中的地址值, 该地址指向一块内存空间.
 */
pointer() {
	printf("5.指针.\n");
	int a = 1;
	printf("  a的指针地址: %#x\n", &a);
	int* p = 0x1CF88808;//定义指针变量(在基本数据类型int后面加*), 赋值
	printf("  指针p的地址: %#x\n", p);
	p = &a;				//给指针变量p赋值a的地址
	printf("  指针p的地址: %#x\n", p);

	int val = *p;		//获取指针处的值
	printf("  获取指针处的值, *p = %d\n", val);
	printf("\n");

	/**
	 * 13.13_指针常见的问题
	 */
	printf("5.1.野指针, 没有具体指向任何变量地址, 例: int *p;   printf(\"*p = %%d\\n\", *p);\n");
	printf("\n");
	printf("5.2.指针的兼容性. 指针之间赋值比普通数据类型赋值更为严格, 例如: 不可以把一个 double* 赋值给 int(虽然不报错)\n");
	int int4880 = 0x1310;	//int4880 = 4880
	char char2 = 2;
	char buf[10] = { 0x12, 0x34, 0x56, 0x78, 5, 6, 7, 8, 9, 10 };
	char* char4880 = &int4880;//给 char4880 赋 int4880 的地址值
	int* q = &char2;
	printf("  %x\n", *char4880);//10		char 指针指向 int, 只能取 char 空间的值
	printf("  %x\n", *q);		//cccccc02	int  指针指向 char, 前面cccccc是另外空间的值
	q = buf;
	printf("  %x\n", *q);		//78563412	int  指向 char[]
	printf("\n");

	/**
	 * 13.14_多级指针
	 * 为什么使用指针? 指针的重要性:
	 * 1.直接访问硬件(opengl显卡绘图)
	 * 2.快速传递数据(指针表示地址)
	 * 3.返回一个以上的值(返回数据/结构体 的指针)
	 * 4.表示复杂的数据结构(结构体)
	 * 5.方便处理字符串
	 * 6.指针有利于理解面向对象
	 */
	printf("5.3.多级指针(对象里的对象)\n");
	int a53 = 5;
	int* p53 = &a53;	//一级指针
	printf("  1级指针int* p53; 的地址, *p53 = %#x\n", *p53);
	printf("  1级指针int* p53; 的值, *p53 = %d\n", *p53);

	int** pp1 = &p53;	//二级指针, 指向一级指针的地址
	printf("  2级指针int** pp1; 的地址, *pp1 = %#x\n", *pp1);
	printf("  2级指针int** pp1; 指向*p53的值, **pp1 = %d\n", **pp1);

	int*** ppp1 = &pp1;	//三级指针
	printf("  3级指针int*** ppp1; 的地址, *ppp1 = %#x\n", *ppp1);
	printf("  3级指针int*** ppp1; 指向*p53的值, ***ppp1 = %d\n", ***ppp1);
	printf("\n");
}
