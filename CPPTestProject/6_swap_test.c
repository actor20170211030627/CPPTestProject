

/**
 * 13.16_ֵ�������ô���
 */
swap(int* a, int* b) {
	printf("6.ָ��ֵ����, a=%d, b=%d\n", *a, *b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("  a = %d\n", *a);
	printf("  b = %d\n", *b);
	printf("\n");
}
