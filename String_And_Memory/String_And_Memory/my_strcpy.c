//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//char* my_strcpy(char* dest, char* src)
//{
//	//实现字符串拷贝只有对地址解引用才能找到字符串内容
//    //所以两个指针不能为空，必须断言
//	assert(dest && src);
//
//	char* ret = dest;
//
//	while (*src)
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//把原字符串的\0拷贝过来
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//
//	return 0;
//}