#include <stdio.h>
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};//MALE,FEMALE,SECRET为枚举常量
int main()
{
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2
    return 0;
}