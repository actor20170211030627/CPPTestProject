

/*
 * 13.26_������
 */
unionTest() {
	printf("11.������: union {int i; char c; short s;} MyUnion;\n");
	printf("   ��������, ͬһʱ��ֻ��1������\n");
	union { int i; char c; short s; } MyUnion;//��ǰ���һ��Ԫ�غ����ü�;
	MyUnion.i = 23;
	MyUnion.c = 'A';
	MyUnion.s = 99;
	printf("   MyUnion.i = %d\n", MyUnion.i);//99
	printf("   �����峤�� = %d(����ȡ����������������)\n", sizeof(MyUnion));//4
	printf("\n");
}
