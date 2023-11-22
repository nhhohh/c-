#include <stdio.h>
//将数组A中的内容和数组中B中的内容进行交换（数组一样大）
int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,0};
    int tmp=0;
    int i=0;
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<sz;i++)
    {
        tmp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tmp;
        printf("arr1[]=%d arr2[]=%d\n",arr1[i],arr2[i]);
    }
    return 0;
}