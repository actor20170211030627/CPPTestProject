#include <stdio.h>

/**
 * 13.08_基本输入
 */
scanfInput() {
	printf("3.基本输入.\n");
	printf("  请输入班级人数:\n");
	int count;
	scanf_s("%d", &count);	//&: 取地址值. scanf()函数报错: 不安全
	printf("  班级人数: %d\n", count);
	printf("\n");
}
