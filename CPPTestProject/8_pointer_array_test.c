

/**
 * 13.18_数组入门 & 字符指针(字符串)
 *
 * 13.20_数组的特点
 *      1.数组的首元素地址就是数组的地址
 *      2.数组是一块连续的内存空间
 */
array() {
	printf("8.数组入门, char buf[] = {'A', 'B', 'C', 'D', 'E'};\n");
	//[] 要放到变量后面
	char buf[] = { 'A', 'B', 'C', 'D', 'E' };
	char* p = /*&*/buf;	//p 和 &buf[0] 的地址相同
	char* p0 = &buf[0];
	printf("  p = %c\n", *p);		//取第0个元素的值
	printf("  p0 = %c\n", *p0);
	printf("\n");

	printf("8.1.计算数组/字符串长度:\n");
	printf("  1.int lenght = strlen(str);          //使用库函数strlen, 只适用于'字符串'数组\n");
	printf("  2.int i=0;   while (arr[i++] != '0');//适用于计算'数组'中实际元素多少\n");
	printf("  3.len = sizeof(arr)/sizeof(arr[0]);  //适用于计算'数组'分配的总长度多少，包括空字符\n");
	int length = sizeof(buf) / sizeof(buf[0]);	   //总长度÷每个的长度 = 总元素长度
	for (int i = 0; i < length; i++) {
		printf("  buf[%d] = %c,   ", i, buf[i]);
	}
	printf("\n\n");

	printf("8.2.'字符指针'表示'字符串'\n");
	char* str = "World!";
	printf("  char* str = \"%s\";\n", str);
	printf("\n");

	printf("8.3.数组的指针运算\n");
	printf("  通过指针偏移, 输出数组的值.\n");
	for (int i = 0; i < length; i++) {
		printf("  buf[%d] = %c,   ", i, *p + i);//指针+1, 表示所指向的内存地址向后偏移1个单位
	}
	printf("\n\n");

	/*
	 * 13.21_指针的加法
	 */
	printf("8.4.指针的加法(指针+1, 表示所指向的内存地址向后偏移1个单位)\n");
	int arrint[] = { 1, 2, 3, 4, 5 };
	int lengthint = sizeof(arrint) / sizeof(arrint[0]);
	int* pint = &arrint[0];					//第一个元素地址
	for (int i = 0; i < lengthint; i++)
	{
		printf("  buf[%d] = %d,   ", i, *pint + i/* * 4*/);//注意: 指针这里每次都是+1, 不是加sizeof(int)
	}
	printf("\n");

	p + 1; p - 1;				//指针指向 下一个/上一个(即使 int[] 也会跳到"下一个元素")
	p++; p--;
	int sp = p - p0;			//通常用于同一个数组内2个元素之间的距离
	int equals = p == p0;		//是否同一位置
	printf("  *p 和*p0是否同一位置(p == p1): %d. *p和*p0之间的距离: %d\n", equals, sp);
	printf("\n");

	printf("指针串联2个数组:\n");
	printf("  char s1[100] = \"hello\";\n");
	printf("  char s2[100] = \"world\";\n");
	char s1[100] = "hello";
	char s2[100] = "world";
	char* ps1 = s1;
	while (*ps1) {
		ps1++;
	}
	char* ps2 = s2;
	while (*ps2) {
		*ps1++ = *ps2++;
	}
	printf("  串联结果: %s\n", s1);
	printf("\n");
}
