//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//void test(const char* str)
//{
//    printf("%s\n", str);
//}
//
//int main()
//{
//	/*int(*pf)(int, int) = Add;
//    int(*pfarr[4])(int, int) = { Add,Sub,Mul,Div };
//
//    int(*(*ppfarr[4]))(int, int) = &pfarr;
//
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", pfarr[i](4, 8));
//    }*/
//
//    //函数指针pfun
//    void(*pfun)(const char*) = test;
//
//    //函数指针数组pfunarr
//    void(*pfunarr[4])(const char*);
//    pfunarr[0] = test;
//
//    //指向函数指针数组的指针ppfunarr
//    void(*(*ppfunarr[4]))(const char* str) = &pfunarr;
//
//	return 0;
//}   