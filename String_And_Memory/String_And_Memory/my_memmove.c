//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//void test()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr1 + 2, arr1, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}