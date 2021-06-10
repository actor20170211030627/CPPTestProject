
/**
 * 1.各种数据类型, 及长度. sizeof长度,单位byte. C语言的数据类型(没有byte和boolean)
 * Java语言				 C语言
 * byte    1个字节(8位)
 * boolean 1个字节		0/非0(false/true)
 *
 * signed/unsigned标识符
 * 符号  : signed int	-2^31 ~ 2^31-1
 * 无符号: unsigned int	0 ~ 2^32-1
 */
/*void 返回值不能写void*/ testSizeof(/*struct MyStruct boy*/) {
	printf("1.各种数据类型, 及长度.\n");
	int array[9];													//	C语音长度				Java语言		备注
	double* p;
	printf("  char               = %d\n", sizeof(char));				//1个字节(-128~127)			2个字节			//长度不一致
	printf("  unsigned char      = %d\n", sizeof(unsigned char));		//1个字节(0~255)
	printf("  short              = %d\n", sizeof(short));				//2							2
	printf("  unsigned short     = %d\n", sizeof(unsigned short));	//2
	printf("  int                = %d\n", sizeof(int));				//4							4
	printf("  unsigned int       = %d\n", sizeof(unsigned int));		//4(最高位不算是符号位, 算作正数)
	printf("  long               = %d\n", sizeof(long));				//window(32,64):4, unix:8	8				//长度不一致
	printf("  unsigned long      = %d\n", sizeof(unsigned long));		//4
	printf("  long long          = %d\n", sizeof(long long));			//8(32系统中,CPU寄存器是32位,计算效率低)
	printf("  unsigned long long = %d\n", sizeof(unsigned long long));//8
	printf("  float              = %d\n", sizeof(float));				//4							4
	printf("  long float         = %d\n", sizeof(long float));		//8
	printf("  double             = %d\n", sizeof(double));			//8							8
	printf("  long double        = %d\n", sizeof(long double));		//8
	printf("  array[9]           = %d\n", sizeof(array));				//4 * 9 = 36
	printf("  p指针长度          = %d(操作系统&编译器都是64位, 长度=8. 否则长度=4)\n", sizeof(p));//4/8
	//printf("  结构体 boy 长度    = %d(int占4位, char占1位x2, 但由于'内存对齐', 所以占了8位.)\n", sizeof(boy));
	//printf("\n");
}
