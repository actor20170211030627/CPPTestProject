#include <windows.h>

/*
 * 13.23_�ڴ�����
 */
neicunsiqu() {
	printf("9.�ڴ����� & ����/�ͷ��ڴ�\n");
	printf("  ��������������������        ��������������������\n");
	printf("  ��  .code(������) ��        ��                ��\n");
	printf("  ��������������������        ��                ��\n");
	printf("  ��  .data(������) ��        ��  .heap(���ڴ�) ��\n");
	printf("  ��������������������        ��                ��\n");
	printf("  ��  .stack(ջ�ڴ�)��        ��                ��\n");
	printf("  ��������������������        ��������������������\n");
	printf("   .code�� : (����ջ)\n");
	printf("   .data�� : ������\n");
	printf("   .stack��: int a = 3;(����),  People p =;\n");
	printf("   .heap�� : new People();  ���ڴ��ö�\n");
	printf("  ����:\n");
	printf("  ջ:\n");
	printf("    �Զ�����, �Զ��ͷ�(ϵͳά��)\n");
	printf("    ��С�̶�, �ڴ�ռ�����\n");
	printf("    ��ջ�Ϸ�����ڴ��'��̬�ڴ�'\n");
	printf("  ��:\n");
	printf("    �������Լ�����: malloc();//������ڴ�\n");
	printf("    ��Сȡ���������ڴ�Ĵ�С, �ڴ�ռ䲻����\n");
	printf("    java���Զ�����, C����Ҫ������ʹ�� free(); �����ֶ��ͷŶ��ڴ�(Ч��û�ж��ڴ��)\n");
	printf("    �Ӷ��Ϸ�����ڴ��'��̬�ڴ�'\n");
	printf("\n");
	int i = 3;
	printf("  ���濪ʼѭ�� %d ������&�ͷ��ڴ�, ��Ҫ������������鿴.\n", i);
	while (i--)
	{
		Sleep(1000);
		void* memory = malloc(1024 * 1024);//void*: �൱��Java��Object����. ÿ��1s, ����һ��1Mb���ڴ�. ������������鿴
		Sleep(1000);
		free(memory);
	}
	printf("\n");
}
