#include <stdio.h>
//编写在一个有序数组中查找具体的某个数字n的程序
int main()//二分查找法
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;//mid定义为中间数（下标）
        if(arr[mid]>k)
        {
            right=mid-1;
        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            printf("找到了，下标是:%d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("找不到\n");
    }
    return 0;
}