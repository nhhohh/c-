#include <stdio.h>
#include <string.h>
//创建一个结构体
struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = {"C语言程序设计",55};    
    printf("书名:%s\n",b1.name);
    printf("价格:%d元\n",b1.price);
    b1.price=15;
    printf("修改后的价格:%d\n",b1.price);
    strcpy(b1.name,"C++");//strcpy--string copy--字符串拷贝
    printf("修改后的数名:%s\n",b1.name);
    return 0;
}
