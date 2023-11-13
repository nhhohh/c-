#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n",sizeof(a));//4
    printf("%d\n",sizeof a);//4
    printf("%d\n",sizeof(int));//4
    //printf("%d\n",sizeof int);//报错
}//sizeof计算的是类型所占空间的大小，单位是字节