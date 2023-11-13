#include <stdio.h>
int main()
{
    int arr[10]={0};
    int sz=0;
    sz=sizeof(arr)/sizeof(arr[0]);//计算数组的元素个数：个数=数组总大小/每个元素的大小
    printf("sz=%d\n",sz);
    return 0;
}