

/**
 * 13.17_利用指针让函数返回多个值
 */
 //C语音的函数返回不能是数组
/*int[]*/ plus(int* a, int* b) {
	printf("7.利用指针让函数返回多个值\n");
	*a += 10;
	*b = 10;
	printf("  a = %d\n", *a);
	printf("  b = %d\n", *b);
	printf("\n");
}
