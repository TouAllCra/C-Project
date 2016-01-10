//
//  main.c
//  c_5(作业)
//
//  Created by ibokan on 15/12/1.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    //指针冒泡
    int arr[5] = {23,43,4,65,14};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        for (int j = 4; i < j; j--) {
            int temp;
            if (*(p+i) > *(p+j)) {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ",*p++);
    }
    printf("\n");
    
    //两个数组之间的数据赋值
    int num[5] = {1,2,3,4,5};
    int obj[5] = {23,43,4,65,14};
    int *p1 = num;
    int *p2 = obj;
    for (int i = 0; i < 5; i++) {
        int temp;
        temp = *(p2+i);
        *(p2+i) = *(p1+i);
        *(p1+i) = temp;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ",*p2++);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ",*p1++);
    }
    printf("\n");
    return 0;
}
