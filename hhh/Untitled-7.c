#include <stdio.h>
int global = 2020;
void test()
{
    printf("test()-%d\n",global);
}
int main()
{
    test();//调用变量
    printf("%d\n",global);
    return 0;
}