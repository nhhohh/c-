#include <stdio.h>
int main()
{
    int a =10;
    int* p=&a;//指针：存放地址的变量
    *p=20;//p为一个整型指针变量
    printf("a=%d\n",a);
    return 0;
}//20