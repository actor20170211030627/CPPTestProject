

/**
 * 13.18_�������� & �ַ�ָ��(�ַ���)
 *
 * 13.20_������ص�
 *      1.�������Ԫ�ص�ַ��������ĵ�ַ
 *      2.������һ���������ڴ�ռ�
 */
array() {
	printf("8.��������, char buf[] = {'A', 'B', 'C', 'D', 'E'};\n");
	//[] Ҫ�ŵ���������
	char buf[] = { 'A', 'B', 'C', 'D', 'E' };
	char* p = /*&*/buf;	//p �� &buf[0] �ĵ�ַ��ͬ
	char* p0 = &buf[0];
	printf("  p = %c\n", *p);		//ȡ��0��Ԫ�ص�ֵ
	printf("  p0 = %c\n", *p0);
	printf("\n");

	printf("8.1.��������/�ַ�������:\n");
	printf("  1.int lenght = strlen(str);          //ʹ�ÿ⺯��strlen, ֻ������'�ַ���'����\n");
	printf("  2.int i=0;   while (arr[i++] != '0');//�����ڼ���'����'��ʵ��Ԫ�ض���\n");
	printf("  3.len = sizeof(arr)/sizeof(arr[0]);  //�����ڼ���'����'������ܳ��ȶ��٣��������ַ�\n");
	int length = sizeof(buf) / sizeof(buf[0]);	   //�ܳ��ȡ�ÿ���ĳ��� = ��Ԫ�س���
	for (int i = 0; i < length; i++) {
		printf("  buf[%d] = %c,   ", i, buf[i]);
	}
	printf("\n\n");

	printf("8.2.'�ַ�ָ��'��ʾ'�ַ���'\n");
	char* str = "World!";
	printf("  char* str = \"%s\";\n", str);
	printf("\n");

	printf("8.3.�����ָ������\n");
	printf("  ͨ��ָ��ƫ��, ��������ֵ.\n");
	for (int i = 0; i < length; i++) {
		printf("  buf[%d] = %c,   ", i, *p + i);//ָ��+1, ��ʾ��ָ����ڴ��ַ���ƫ��1����λ
	}
	printf("\n\n");

	/*
	 * 13.21_ָ��ļӷ�
	 */
	printf("8.4.ָ��ļӷ�(ָ��+1, ��ʾ��ָ����ڴ��ַ���ƫ��1����λ)\n");
	int arrint[] = { 1, 2, 3, 4, 5 };
	int lengthint = sizeof(arrint) / sizeof(arrint[0]);
	int* pint = &arrint[0];					//��һ��Ԫ�ص�ַ
	for (int i = 0; i < lengthint; i++)
	{
		printf("  buf[%d] = %d,   ", i, *pint + i/* * 4*/);//ע��: ָ������ÿ�ζ���+1, ���Ǽ�sizeof(int)
	}
	printf("\n");

	p + 1; p - 1;				//ָ��ָ�� ��һ��/��һ��(��ʹ int[] Ҳ������"��һ��Ԫ��")
	p++; p--;
	int sp = p - p0;			//ͨ������ͬһ��������2��Ԫ��֮��ľ���
	int equals = p == p0;		//�Ƿ�ͬһλ��
	printf("  *p ��*p0�Ƿ�ͬһλ��(p == p1): %d. *p��*p0֮��ľ���: %d\n", equals, sp);
	printf("\n");

	printf("ָ�봮��2������:\n");
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
	printf("  �������: %s\n", s1);
	printf("\n");
}
