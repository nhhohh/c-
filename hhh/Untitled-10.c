#include <stdio.h>
enum Color
{
    RED,
    YELLOW,
    BLUE
};
/*int main()
{
    enum Color color = BLUE;
    BLUE = 6;
    return 0;
}*/ //报错，枚举常量不能被改变
int main()
{
    enum Color color = BLUE;
    color = YELLOW;
    return 0;
}//运行