//
//  main.c
//  C-2.2上机练习
//
//  Created by ibokan on 15/11/25.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("******** 四则兼赔率 ***********\n");
    float firstNumber,secondNumber,sult;
    char run,tail;
    printf("please input the firstNumber :");
    scanf("%f",&firstNumber);
    scanf("%c",&tail);
    printf("\nplease input the run for fourth sample run:");
    scanf("%c",&run);
    printf("\nplease input the secondNumber :");
    scanf("%f",&secondNumber);
    switch (run)
    {
        case '/':
            sult = firstNumber / secondNumber;
            break;
        case '*':
            sult = firstNumber * secondNumber;
            break;
        case '+':
            sult = firstNumber + secondNumber;
            break;
        case '-':
            sult = firstNumber - secondNumber;
            break;
        default:
            break;
    }
    printf("\n%.2f %c %.2f = %.2f\n",firstNumber,run,secondNumber,sult);
    
    printf("***** 求斜率 *****\n");
    int x1,y1,x2,y2;
    float sultNumber;
    printf("please input the two Number of x,y:");
    scanf("%d,%d %d,%d",&x1,&y1,&x2,&y2);
    sultNumber = (y2 - y1) / (x2 - x1);
    printf("the sultNumber is : %.2f",sultNumber);
    
    
    return 0;
}
