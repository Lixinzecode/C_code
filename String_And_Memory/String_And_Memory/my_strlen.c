//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//size_t my_strlen2(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//}
//
//size_t my_strlen3(const char* str)
//{
//	assert(*str); 
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	size_t n2 = my_strlen2(arr);
//	size_t n3 = my_strlen3(arr);
//	printf("%d\n", n);
//	printf("%d\n", n2);
//	printf("%d\n", n3);
//
//	return 0;
//}