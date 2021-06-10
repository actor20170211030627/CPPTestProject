

/**
 * 13.16_值传递引用传递
 */
swap(int* a, int* b) {
	printf("6.指针值交换, a=%d, b=%d\n", *a, *b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("  a = %d\n", *a);
	printf("  b = %d\n", *b);
	printf("\n");
}
