

enum WeekDay
{
	//Ĭ�ϴ�0��ʼ
	Monday = 0, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

/*
 * 13.27_ö��
 */
enumTest() {
	printf("12.ö��\n");
	enum WeekDay day = Sunday;
	printf("   enum WeekDay day = Sunday;//ʹ��ǰ, ��Ҫд���������֮��.\n");
	printf("   printf(\"day = %%d\", day);//6, Ĭ�ϴ�0��ʼ. ���Monday = 10, ��ô��������16\n");
	printf("   day = %d\n", day);
	printf("\n");
}
