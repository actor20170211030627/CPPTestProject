#include <windows.h>

/**
 * 13.10_for循环 & sleep()
 */
forSleep() {
	printf("4.for循环 & sleep().\n");
	printf("  Are you ready? Go!\n");
	int count;
	for (count = 5; count > 0; count--)
	{
		printf("  剩余时间: %d\n", count);
		/**
		 * 1.添加头文件: #include <windows.h>
		 * 2.Sleep(ms): 睡眠.
		 * 3.不能写成 sleep()
		 * 4.如果是 sleep()函数, windows7/linux的 sleep(ms), windows10的 sleep(s).(这一行待验证???)
		 */
		Sleep(100);
	}
	printf("  Game Over!\n");
	printf("\n");
}
