//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;//���ַ�����ʼ��ַ
//	const char* s2 = str2;//�Ӵ���ʼ��ַ
//	const char* p = str1;//�ƶ�ָ��
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
////�����Ӵ�
//int main()
//{
//	char email[] = "lxz@code.com";
//	char substr[] = "code";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}