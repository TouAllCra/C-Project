//
//  main.c
//  c_sort排序算法
//
//  Created by ibokan on 15/12/4.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

//直接插入排序
void DirectInsertionSort(int arr[],int n)
{
    //    int count ,temp;
    //    for (int i = 0; i < 10; i++) {
    //        int key = arr[i];
    //        count = i;
    //        for (int j = 9; i < j; j--) {
    //            if (arr[j] < key) {
    //                key = arr[j];
    //                count = j;
    //            }
    //        }
    //        temp = arr[i];
    //        arr[i] = arr[count];
    //        arr[count] = temp;
    //    }
    
    //教材版本
    int i,j;
    for (i = 2; i <= n; i++) {
        arr[0] = arr[i];
        j = i - 1;
        while (arr[0] < arr[j]) {//以arr[0]为插入位作比较，为真就插入位向后移插入
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = arr[0];
    }
    printf("ds:");
    for (int i = 1; i < 11; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//哈希排序
//教材版本
void shsort(int s[],int n)
{
    int i,j,d;
    d = n / 2;
    while (d >= 1) {
        for (i = d + 1; i <= n; i++) {
            s[0] = s[i];
            j = i - d;
            while ((j > 0) && (s[0] < s[j])) {
                s[ j + d ] = s[j];
                j = j -d;
            }
            s[j+d] = s[0];
        }
        d = d/2;
    }
}

//冒泡排序
//教材版本
void BubbleSort(int a[])
{
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < 10 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t;
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("bs:");
    for (int i = 1; i <= 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//快速排序
//教材版本
void qurtSort(int s[],int start,int end)
{
    int i,j;
    i = start;
    j = end;
    s[0] = s[start];
    while (i < j) {
        while (i < j && s[0] < s[j]) {
            j--;
        }
        if (i < j) {
            s[i] = s[j];
            i++;
        }
        while (i < j && s[j] <= s[0]) {
            i++;
        }
        if (i < j) {
            s[j] = s[i];
            j--;
        }
        s[i] = s[0];
        if (start < i) {
            qurtSort(s, start, j-1);
        }
        if (i < end) {
            qurtSort(s, j+1, end);
        }
    }
}

//选择排序
//教材版本
void choseSort(int s[])
{
    for (int i = 1; i <= 9; i++) {
        for (int j = i + 1; j <= 10 ; j++) {
            if (s[i] > s[j]) {
                int t;
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("CS:");
    for (int i = 1; i <= 10; i++) {
        printf("%d ",s[i]);
    }
    printf("\n");
}

//归并排序
//教材版本
void MergeSort(int r[],int s[],int x1,int x2,int x3)
{
    int i,j,k;
    i = x1;
    j = x2 + 1;
    k = x1;
    while ((i <= x2) && (j <= x3)) {
        if (r[i] <= r[j]) {
            s[k] = r[i];
            i++;
            k++;
        }
        else{
            s[k] = r[j];
            j++;
            k++;
        }
        while (i <= x2) {
            s[k++] = r[i++];
        }
        while (j <= x3) {
            s[k++] = r[j++];
        }
    }
}

void Merge_Sort(int r[],int s[],int m,int n)
{
    int p;
    int t[20];
    if (m == n) {
        s[m] = r[m];
    }
    else
    {
        p = (m + n) / 2;
        Merge_Sort(r, t, m, p);
        Merge_Sort(r,t, p+1, n);
        MergeSort(t, s, m, p, n);
    }
}




int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    //直接插入排序
    int arr[11] = {nanl,25,12,36,45,2,9,39,22,98,37};
    for (int i = 1 ;i <= 10; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    DirectInsertionSort(arr,10);
    
    //哈希排序
    int a[11] = {nanl,69,56,12,136,3,55,46,99,88,25};
    shsort(a,10);
    printf("hs:");
    for (int i = 1; i <= 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    //冒泡排序
    int MP[11] = {nanl,69,56,12,136,3,55,46,99,88,25};
    BubbleSort(MP);
    
    //快速排序
    int QS[10] = {25,12,36,45,2,9,39,22,98,37};
    qurtSort(QS, 1, 10);
    printf("qs:");
    for (int i = 1; i <= 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    //选择排序
    int CS[11] = {nanl,69,56,12,136,3,55,46,99,88,25};
    choseSort(CS);
    
    //归并排序
    int MS[11] = {nanl,69,56,12,136,3,55,46,99,88,25};
    Merge_Sort(MS, MS, 1, 10);
    printf("MS:");
    for (int i = 1; i <= 10; i++) {
        printf("%d ",MS[i]);
    }
    printf("\n");
    
    return 0;
}
