//
//  main.c
//  c_find(查找算法)
//
//  Created by ibokan on 15/12/4.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//二分查找
//教材版本
void binary_search(int key,int a[],int n)
{
    int low,high,mid,count = 0,count1 = 0;
    low = 0;
    high = n - 1;
    while (low < high) {
        count++;
        mid = (low + high) / 2;
        if (key < a[mid]) {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else if (key == a[mid])
        {
            printf("查找成功\n查找%d次！a[%d] = %d",count,mid,key);
            count1++;
            break;
        }
    }
    if (count1 == 0) {
        printf("查找失败");
    }
}

//分块查找
//教材版本
struct index
{
    int key;
    int start;
    int end;
}index_table[4];

int block_search(int key,int a[])
{
    int i,j;
    i = 1;
    while (i <= 3 && key > index_table[i].key) {
        i++;
    }
    if (i > 3) {
        return 0;
    }
    j = index_table[i].start;
    while (j <= index_table[i].end && a[j] != key) {
        j++;
    }
    if (j > index_table[i].end) {
        j = 0;
    }
    return j;
}

//哈希查找
//教材版本
#define Max 11
#define N 8
int hasgtable[Max];

int func(int value)
{
    return value % Max;
}

int search(int key)
{
    int pos,t;
    pos = func(key);
    t = pos;
    while (hasgtable[t] != key && hasgtable[t] != -1) {
        t = (t + 1) % Max;
        if (pos == t) {
            return -1;
        }
    }
    if (hasgtable[t] == -1) {
        return  NULL;
    }
    else{
        return t;
    }
}

void creathash(int key)
{
    int pos,t;
    pos = func(key);
    t = pos;
    while (hasgtable[t] != -1) {
        t = (t + 1) % Max;
        if (pos == t) {
            printf("It is fill\n");
            return;
        }
    }
    hasgtable[t] = key;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
   
    //二分查找
    int key,a[100],n,i;
    printf("please input your numbers long:\n");
    scanf("%d",&n);
    printf("please input your numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("please input which number is you want to find:\n");
    scanf("%d",&key);
    binary_search(key, a, n);
    printf("\n");
    
    //分块查找
    int i1,j1 = 0,k,key1,a1[16];
    printf("please input fifteen numbers:\n");
    for (i1 = 1; i1 < 16; i1++) {
        scanf("%d",&a1[i1]);
    }
    for (i1 = 1; i1 <= 3; i1++) {
        index_table[i1].start = j1 +1;
        j1 = j1 + 1;
        index_table[i1].end = j1 + 4;
        j1 = j1 + 4;
        index_table[i1].key = a1[j1];
    }
    printf("please input which number you want to find:\n");
    scanf("%d",&key1);
    k = block_search(key1,a1);
    if (k != 0) {
        printf("It is find!,it is in %d\n",k);
    }
    else
    {
        printf("Oh,it is here?\n");
    }
    
    
    //哈希查找
    int flag[50];
    int i2,j2,t;
    for (i2 = 0; i2 < Max; i2++) {
        hasgtable[i2] = -1;
    }
    for (i2 = 0; i2 < 50; i2++) {
        flag[i2] = 0;
    }
    srand((unsigned long)time(0));
    i2 = 0;
    while (i2 != N ) {
        t = rand() % 50;
        if (flag[t] == 0) {
            creathash(t);
            printf("%2d:",t);
            for (j2 = 0; j2 < Max; j2++) {
                printf("%2d",hasgtable[j2]);
            }
            printf("\n");
            flag[t] = 1;
            i2++;
        }
    }
    printf("please input which number you want to find:\n");
    scanf("%d",&t);
    if (t > 0 && t < 50) {
        i2 = search(t);
        if (i2 != -1) {
            printf("It is find!it is in %d\n",i2);
        }
        else
        {
            printf("It is here?\n");
        }
        
    }
    else{
        printf("please check you input number\n");
    }
    
    
    return 0;
}
