#include <windows.h>

/**
 * 13.10_forѭ�� & sleep()
 */
forSleep() {
	printf("4.forѭ�� & sleep().\n");
	printf("  Are you ready? Go!\n");
	int count;
	for (count = 5; count > 0; count--)
	{
		printf("  ʣ��ʱ��: %d\n", count);
		/**
		 * 1.���ͷ�ļ�: #include <windows.h>
		 * 2.Sleep(ms): ˯��.
		 * 3.����д�� sleep()
		 * 4.����� sleep()����, windows7/linux�� sleep(ms), windows10�� sleep(s).(��һ�д���֤???)
		 */
		Sleep(100);
	}
	printf("  Game Over!\n");
	printf("\n");
}
