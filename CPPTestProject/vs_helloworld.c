#include <stdio.h>//��׼�������
#include <stdlib.h>
#include <string.h>
//��Ȼ����Ҫ����, ���ҵ�����ᱨ��: LNK2005 array �Ѿ��� 1_sizeof_test.obj�ж���...
//#include "1_sizeof_test.c"
//#include "2_printf_test.c"
//#include "3_scanf_test.c"
//#include "4_for_sleep_test.c"
//#include "5_pointer_test.c"
//#include "6_swap_test.c"
//#include "7_plus_test.c"
//#include "8_pointer_array_test.c"
//#include "9_neicunsiqu_test.c"
//#include "10_struct_test.c"
//#include "11_union_test.c"
//#include "12_enum_test.c"
//#include "13_typeof_test.c"


void study() {
	printf("10.�ṹ��(Java��Class), Ҫд��main()�Ϸ�\n");
	printf("   �ṹ���ڲ�����д����(����): void study() {}, ������дһ������ָ��ָ���������: void (*study)();\n");
	printf("   struct MyStruct boy = {23, 'M', 'A', study};//study()��һ��MyStruct �ṹ���Ϸ��ĺ���\n");
	printf("   printf(\"boy.age = %%d\\n\", boy.age);//23\n");
	printf("   boy.study();//���ýṹ����ĺ���ָ��\n");
	printf("10.1.ʹ��һ���ṹ��ָ��, ���ýṹ����ĺ���ָ��:\n");
	printf("struct MyStruct* pboy = &boy;\n");
	printf("pboy -> study();\n");
	printf("\n");
}

struct MyStruct
{
	int age;
	char sex;
	char c;
	//void study() {}	//�ṹ���ڲ�����д����
	void (*study)();	//������дһ������ָ��ָ���������
};


//����ע��

/*
 * ��ע��,��ע�Ͷ���
*/

/*
 * �ļ� -> �½���Ŀ -> Visual C++ -> Win32����̨Ӧ�ó���(2017��:Windows����->Windows������) ->
 * ����:day01 -> λ��:F:\workspace_cpp\ -> ȷ�� -> ��һ�� ->
 * ����̨Ӧ�ó���&����Ŀ(�ֶ���,�����и���ͷ�ļ�,���±���ʧ��)&��ȫ������������(SDL)��� ->
 * ���
 *
 * Դ�ļ� -> ������� -> C++ -> ����:01.c
 *
 * 1.Visual Studio Code ����C: https://www.zhihu.com/question/30315894
*/
/*int*/void main()
{
	int a = 3;
	int b = 5;

	struct MyStruct boy = { 23, 'M', 'A', study};

	//1.����
	testSizeof(boy);
	printf("  �ṹ�� boy ����    = %d(intռ4λ, charռ1λx2, ������'�ڴ����', ����ռ��8λ.)\n", sizeof(boy));
	printf("\n");
	//2.�����ʽ
	printFormat();
	//3.��������
	scanfInput();
	//4.forѭ�� & sleep()
	forSleep();
	//5.ָ��
	pointer();
	//6.ֵ����
	swap(&a, &b);
	a ^= b ^= a ^= b;			//ֵ������
	//7.����ָ���ú������ض��ֵ
	plus(&a, &b);
	//8.�������� & �ַ�ָ��(�ַ���)
	array();
	//9.�ڴ�����
	neicunsiqu();
	//10.�ṹ��
	boy.study();
	//testStruct(boy);
	//11.������
	unionTest();
	//12.ö��
	enumTest();
	//13.�Զ�������
	customType();

	//win7������, ��Ҫ��ͣ, ����ڿ�һ������
	system("pause");
	//return 0;
}
