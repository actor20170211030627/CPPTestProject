#include <windows.h>

/*
 * 13.23_内存四驱
 */
neicunsiqu() {
	printf("9.内存四驱 & 申请/释放内存\n");
	printf("  ┌————————┐        ┌————————┐\n");
	printf("  │  .code(代码区) │        │                │\n");
	printf("  ├————————┤        │                │\n");
	printf("  │  .data(数据区) │        │  .heap(堆内存) │\n");
	printf("  ├————————┤        │                │\n");
	printf("  │  .stack(栈内存)│        │                │\n");
	printf("  └————————┘        └————————┘\n");
	printf("   .code区 : (方法栈)\n");
	printf("   .data区 : 数据区\n");
	printf("   .stack区: int a = 3;(变量),  People p =;\n");
	printf("   .heap区 : new People();  堆内存大得多\n");
	printf("  区别:\n");
	printf("  栈:\n");
	printf("    自动申请, 自动释放(系统维护)\n");
	printf("    大小固定, 内存空间连续\n");
	printf("    从栈上分配的内存叫'静态内存'\n");
	printf("  堆:\n");
	printf("    开发者自己申请: malloc();//申请堆内存\n");
	printf("    大小取决于虚拟内存的大小, 内存空间不连续\n");
	printf("    java中自动回收, C中需要开发者使用 free(); 函数手动释放堆内存(效率没有堆内存高)\n");
	printf("    从堆上分配的内存叫'动态内存'\n");
	printf("\n");
	int i = 3;
	printf("  下面开始循环 %d 次申请&释放内存, 需要在任务管理器查看.\n", i);
	while (i--)
	{
		Sleep(1000);
		void* memory = malloc(1024 * 1024);//void*: 相当于Java的Object对象. 每隔1s, 申请一次1Mb的内存. 在任务管理器查看
		Sleep(1000);
		free(memory);
	}
	printf("\n");
}
