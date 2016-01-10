//
//  main.c
//  Quick sort
//
//  Created by ibokan on 15/12/1.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

void QuickSort(int a[],int left,int right)
{
    int temp,l,r;
    l = left;
    r = right - 1;
    temp = a[left];
    while (l != r) {
        for (; l < r; r-- ) {
            if (a[r] < temp) {
                a[l] = a[r];
                break;
            }
        }
        for (; l < r; l++) {
            if (a[l] > temp) {
                a[r] = a[l];
                break;
            }
            
        }
        a[l] = temp;
        
    }
    QuickSort(a, left, l);
    QuickSort(a, l-1, right);
    
    for (int i = 0; i < 5; i++) {
        printf("%d",a[i]);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int n[5] = {45,87,12,32,58};
    QuickSort(n, 0, 5);
    
    
    return 0;
}
