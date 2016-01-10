//
//  main.c
//  c_05(作业)
//
//  Created by ibokan on 15/12/2.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    //识别字符个数
    char string[30] = "hello123 wo78&*5 yyu57548/**.0";
    char *p = string;
    int Big=0,Small=0,nul=0,num=0,oth=0;
    for (int i = 0; i < 30; i++) {
        if (*(p+i) >= 48 && *(p+i) <= 57) {
            num++;
        }
        else if (*(p+i) == ' ')
        {
            nul++;
        }
        else if (*(p+i) >= 65 && *(p+i) <= 90)
        {
            Big++;
        }
        else if (*(p+i) >= 97 && *(p+i) <= 122)
        {
            Small++;
        }
        else
        {
            oth++;
        }
    }
    printf("Big:%d,Small:%d,Null:%d,Number:%d,Other:%d \n",Big,Small,nul,num,oth);

    //耶稣找叛徒
    int peoNum[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int peo = 0;
    int i = 6;
    int j = 0;
    while (i > 0) {
        for (int k = 0; k < 13; k++) {
            if (peoNum[k] != 0) {
                j++;
            }
            if (j % 3 == 0 && peoNum[k] != 0 ) {
                peoNum[k] = peo;
            }
            
        }
        i--;
    }
    for (int q = 0; q < 13; q++) {
        if (peoNum[q] != 0) {
            printf("%d ",peoNum[q]);
        }
    }
    printf("\n");
    
    //strcmp现实
    char str1[5] = {"hello"};
    char str2[5] = {"heklo"};
    int s1 = 0;
    for (int s = 0; s < 5; s++) {
        if (str1[s] != str2[s]) {
            s1 = (int)str1 - (int)str2;
            
        }
    }
    printf("%d\n",s1);
    
    //指向指针的指针排序
    
    
    
    return 0;
}
