//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;//主字符串起始地址
//	const char* s2 = str2;//子串起始地址
//	const char* p = str1;//移动指针
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' &&
//			   *s2 != '\0' &&
//			   *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//
//}
//
////查找子串
//int main()
//{
//	char email[] = "lxz@code.com";
//	char substr[] = "code";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}