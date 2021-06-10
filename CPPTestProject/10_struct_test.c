
/*
 * 13.25_结构体(Java的Class), 要写到main()上方
 */


//定义这种结构体类型是 List 的元素
typedef struct {
	char* key;
	char* value;
} ListEntity;

//ArrayList??
static const ListEntity lists[] = {
		{"IP",   "127.0.0.1"},
		{"PORT", "8080"}
};

//测试结构体
//testStruct(struct MyStruct boy) {
//	boy.study();
//}
