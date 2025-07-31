#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

struct S
{
	int a : 3;
	int b : 4;

	int c : 5;
	int d : 4;
};

typedef struct S
{
	int i;
	int a[0];//柔性数组成员
}S;


int main()
{
	printf("%d", sizeof(struct S));

	return 0;
}