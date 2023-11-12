#include <stdio.h>
int main()
{
    char arr1[]="abc";//数组
//'\0'是字符串的结束标志（不是内容）
    char arr2[]={'a','b','c','\0'};//或0
    printf("%s\n",arr1);//%s是打印字符串
    printf("%s\n",arr2);//(ASCII编码)'a'-97,'b'-98,'A'-65,'B'-66....
    return 0;
}//abc abc