#include <stdio.h>
int main()
{
    int i =1;
    while(i<=10)
    {
        if(i==5)
        break;//break在while循环中的作用
        printf("%d\n",i);
        i++;
    }
    return 0;
}