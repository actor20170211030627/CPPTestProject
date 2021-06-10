
/*
 * 13.28_自定义类型(重点)
 */
customType() {
	printf("13.自定义类型(重点)\n");
	printf("   typedef int haha;\n");
	printf("   typedef unsigned char jboolean;//java类型的boolean\n");
	printf("   typedef long long jlong;       //java类型的lang占8个字节\n");
	printf("   typedef void* jobject;         //java类型的对象\n");
	printf("   typedef const struct JNINativeInterface* JNIEnv;//一级结构体指针, android的jni.h是这样写\n");
	printf("   typedef const struct JNIInvokeInterface* JavaVM;//一级结构体指针, android的jni.h是这样写\n");
	printf("   更多定义类型见: jni.h\n");
	printf("   haha i = 3;\n");
	printf("   printf(\"day = %%d\", i);//3\n");
	printf("\n");
}
