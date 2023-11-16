#include <stdio.h>
//编写代码实现，模拟用户登录情景，并且只能登录三次
//（只允许输入三次密码，如果密码正确，则提示登陆成功，
//如果三次均输入错误，则退出程序）
#include <string.h>
int main()
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("请输入密码:>");
        scanf("%s",password);
        //if(password=="123456")//==不能用来比较两个字符串是否相等，
                                //应使用库函数-strcmp
        if(strcmp(password,"123456")==0)
        {
            printf("登陆成功\n");
            break;
        }
        else
        {
            printf("密码输入错误\n");
        }
    }
    if(i==3)
        printf("三次密码均错误，退出程序\n");
    return 0;
}