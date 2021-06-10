

enum WeekDay
{
	//默认从0开始
	Monday = 0, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

/*
 * 13.27_枚举
 */
enumTest() {
	printf("12.枚举\n");
	enum WeekDay day = Sunday;
	printf("   enum WeekDay day = Sunday;//使用前, 需要写在这个方法之上.\n");
	printf("   printf(\"day = %%d\", day);//6, 默认从0开始. 如果Monday = 10, 那么这儿会输出16\n");
	printf("   day = %d\n", day);
	printf("\n");
}
