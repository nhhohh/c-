#include <stdio.h>
//计算1-1/2+1/3-1/4+...-1/100
int main()
{
    int i=0;
    double sum=0.0;
    int flag=1;
    for(i=1;i<=100;i++)
    {
        sum=flag*(sum+1.0/i);
        flag=-flag;
    }
    printf("%lf\n",sum);
    return 0;
}