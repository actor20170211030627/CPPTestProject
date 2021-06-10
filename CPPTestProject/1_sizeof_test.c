
/**
 * 1.������������, ������. sizeof����,��λbyte. C���Ե���������(û��byte��boolean)
 * Java����				 C����
 * byte    1���ֽ�(8λ)
 * boolean 1���ֽ�		0/��0(false/true)
 *
 * signed/unsigned��ʶ��
 * ����  : signed int	-2^31 ~ 2^31-1
 * �޷���: unsigned int	0 ~ 2^32-1
 */
/*void ����ֵ����дvoid*/ testSizeof(/*struct MyStruct boy*/) {
	printf("1.������������, ������.\n");
	int array[9];													//	C��������				Java����		��ע
	double* p;
	printf("  char               = %d\n", sizeof(char));				//1���ֽ�(-128~127)			2���ֽ�			//���Ȳ�һ��
	printf("  unsigned char      = %d\n", sizeof(unsigned char));		//1���ֽ�(0~255)
	printf("  short              = %d\n", sizeof(short));				//2							2
	printf("  unsigned short     = %d\n", sizeof(unsigned short));	//2
	printf("  int                = %d\n", sizeof(int));				//4							4
	printf("  unsigned int       = %d\n", sizeof(unsigned int));		//4(���λ�����Ƿ���λ, ��������)
	printf("  long               = %d\n", sizeof(long));				//window(32,64):4, unix:8	8				//���Ȳ�һ��
	printf("  unsigned long      = %d\n", sizeof(unsigned long));		//4
	printf("  long long          = %d\n", sizeof(long long));			//8(32ϵͳ��,CPU�Ĵ�����32λ,����Ч�ʵ�)
	printf("  unsigned long long = %d\n", sizeof(unsigned long long));//8
	printf("  float              = %d\n", sizeof(float));				//4							4
	printf("  long float         = %d\n", sizeof(long float));		//8
	printf("  double             = %d\n", sizeof(double));			//8							8
	printf("  long double        = %d\n", sizeof(long double));		//8
	printf("  array[9]           = %d\n", sizeof(array));				//4 * 9 = 36
	printf("  pָ�볤��          = %d(����ϵͳ&����������64λ, ����=8. ���򳤶�=4)\n", sizeof(p));//4/8
	//printf("  �ṹ�� boy ����    = %d(intռ4λ, charռ1λx2, ������'�ڴ����', ����ռ��8λ.)\n", sizeof(boy));
	//printf("\n");
}
