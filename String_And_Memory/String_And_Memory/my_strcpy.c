//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//char* my_strcpy(char* dest, char* src)
//{
//	//ʵ���ַ�������ֻ�жԵ�ַ�����ò����ҵ��ַ�������
//    //��������ָ�벻��Ϊ�գ��������
//	assert(dest && src);
//
//	char* ret = dest;
//
//	while (*src)
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//��ԭ�ַ�����\0��������
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