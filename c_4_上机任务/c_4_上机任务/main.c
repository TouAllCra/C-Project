//
//  main.c
//  c_4_上机任务
//
//  Created by ibokan on 15/11/26.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("****** 个人所得税 ******");
    float salary,insurance,tax,taxableAmount,incomeTax,daduct;
    printf("请输入税前工资以及五险一金，空格隔开：\n");
    scanf("%f %f",&salary,&insurance);
    if (salary <= 3500) {
        printf("无需缴纳个人所得税\n");
    }else{
        taxableAmount = salary - insurance - 3500;
        if (taxableAmount <= 1500) {
            tax = 0.03f;
            daduct = 0;
        }
        else if (taxableAmount > 1500 && taxableAmount <= 4500)
        {
            tax = 0.1f;
            daduct = 105;
        }
        else if (taxableAmount > 4500 && taxableAmount <= 9000)
        {
            tax = 0.2f;
            daduct = 555;
        }
        else if (taxableAmount > 9000 && taxableAmount <= 35000)
        {
            tax = 0.25f;
            daduct = 1005;
        }
        else if (taxableAmount > 35000 && taxableAmount <= 55000)
        {
            tax = 0.3f;
            daduct = 2755;
        }
        else if (taxableAmount > 55000 && taxableAmount <= 80000)
        {
            tax = 0.35f;
            daduct = 5505;
        }
        else if (taxableAmount > 80000)
        {
            tax = 0.45f;
            daduct = 13505;
        }
        incomeTax = taxableAmount * tax -daduct;
        printf("个人所得税为：%.2f",incomeTax);
    }
    
    
    printf("**** 计算销售奖金 ******");
    float profit, bonus;
    printf("请输入当月利润：\n");
    scanf("%f",&profit);
    if (profit <= 100000) {
        bonus = profit * 0.1;
    }
    else if (profit > 100000 && profit < 200000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075;
    }
    else if (profit >= 200000 && profit < 400000)
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000 ) * 0.05;
    }
    else if (profit >= 400000 && profit < 600000 )
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000 ) * 0.05 + (profit - 400000 ) * 0.03;
    }
    else if (profit >= 600000 && profit <= 1000000 )
    {
        bonus = 100000 * 0.1 + 100000 * 0.075 
    }
    
    
    
    
    
    
    return 0;
}
