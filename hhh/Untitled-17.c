#include <stdio.h>
int main()//if语句
{
    int input = 0;
    printf("加入比特\n");
    printf("你要好好学习吗？(1/0)>:");
    scanf("%d",&input);
    if(input == 1)
        printf("好offer\n");
    else
        printf("卖红薯\n");
    return 0;
}