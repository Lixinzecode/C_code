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
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//
//	printf("%s %d %f", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}