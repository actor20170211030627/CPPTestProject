

/*
 * 13.26_联合体
 */
unionTest() {
	printf("11.联合体: union {int i; char c; short s;} MyUnion;\n");
	printf("   联合体中, 同一时间只有1个变量\n");
	union { int i; char c; short s; } MyUnion;//以前最后一个元素好像不用加;
	MyUnion.i = 23;
	MyUnion.c = 'A';
	MyUnion.s = 99;
	printf("   MyUnion.i = %d\n", MyUnion.i);//99
	printf("   联合体长度 = %d(长度取决于最大的数据类型)\n", sizeof(MyUnion));//4
	printf("\n");
}
