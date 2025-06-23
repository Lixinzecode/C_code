//#define _CRT_SECURE_NO_WARNINGS 1
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test()
//{
//	//测试使用 qsort 排序结构体数据
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//根据名字排序
//}
//
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	////把数组排成升序
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////bubble_sort(arr, sz);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	test();
//
//	return 0;
//}