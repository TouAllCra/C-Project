//
//  main.c
//  c_3(作业)
//
//  Created by ibokan on 15/11/27.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

//闰年判断
int ALeapYear(int n)
{
    int year = n;
    if (year % 400 == 0 || (year % 4 && year % 100 != 0)) {
        return 1;
    }
    
    return 0;
}
//最大公约数
int GreatesCommonDivisor(int a,  int b)
{
    if (b == 0) {
        return a;
    }else{
        if (a > b) {
            return GreatesCommonDivisor(b, a%b);
        }
        else if(a < b)
        {
            return GreatesCommonDivisor(a, b%a);
        }
    }
    return a;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    //闰年判断
    printf("是闰年？%d\n",ALeapYear(2015));
    
    //最大公约数
    printf("%d\n",GreatesCommonDivisor(98,63));
    
    return 0;
}
