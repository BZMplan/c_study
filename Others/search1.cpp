#include<stdio.h>
#include<stdlib.h>
int search(int nums[],int numSize,int target){
    int i = 0;
    while(i < numSize){
        if (nums[i] == target){return i;}
        i++;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int i = 0;
    int nums[]={-1,0,3,5,9,12};
    int length = sizeof(nums)/sizeof(int);
    int data;
    printf("数组内的数据为:\n");
    while (i<length){
        printf("%d\t",nums[i]);
        i++;
    }
    printf("\n长度为 %d\n",length);
    scanf("%d",&data);
    printf("你想查找的数据为%d\n",data);
    printf("查找的数据在第%d位\n",search(nums,length,data));
    
    system("pause");
    return 0;
}
