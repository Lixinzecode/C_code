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
//	struct S s = { 0 };
//
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//以二进制的方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}