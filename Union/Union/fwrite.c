//#define _CRT_SECURE_NO_WARNINGS 1
//#include "test.h"
//
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	//以二进制形式写到文件中
//
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//以二进制的方式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}