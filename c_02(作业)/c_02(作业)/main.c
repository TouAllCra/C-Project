//
//  main.c
//  c_02(作业)
//
//  Created by ibokan on 15/11/26.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    //三个数比较
//    int first,second,third,maxNumber;
//    printf("please input your number:\n");
//    scanf("%d %d %d",&first,&second,&third);
//    printf("the max number is %d",first>second?(first>third?first:third):(second>third?second:third));
//    maxNumber = first>second?(first>third?first:third):(second>third?second:third);
//    printf("the max number is %d",maxNumber);
//    if (first > second) {
//        if (first > third) {
//            printf("the max number is: %d",first);
//        }
//        else
//        {
//            printf("the amx number is : %d",third);
//        }
//    }
//    else
//    {
//        if (second > third)
//        {
//            printf("the max number is :%d",second);
//        }
//        else
//        {
//            printf("the max number is :%d",third);
//        }
//    }
    //奇数和合被三整除
//    int sum = 0,p = 0;
//    for (int i = 1; i <= 100; i++) {
//        sum = i%2 != 0? sum += i:sum;
//        if (i % 2 != 0) {
//            sum += i;
//        }
//        p = i%3==0?printf("%d\n",i):p;
//        if (i % 3 == 0) {
//            printf("this number could chu by three:%d",i);
//        }
//    }
//    printf("the number is :%d",sum);
//
    //打印金钱
//    int moneyNumber,hundre,fifty,ten,four,two,one,pointFour,pointone,pointZnoeFour,pointZnoeOne,midden;
//    float midden2;
//    printf("please input you money number:\n");
//    scanf("%d",&moneyNumber);
//    hundre = moneyNumber / 100;
//    midden =( moneyNumber - hundre * 100 ) / 10;
//    if (midden > 5) {
//        fifty = 1;
//        ten = midden - 5;
//    }else if(midden == 5) {
//        fifty = 1;
//    }else
//    {
//        fifty = 0;
//        ten = midden;
//    }
//    midden = moneyNumber - hundre * 100 - fifty * 50 - ten * 10;
//    if (midden > 5) {
//        four = 1;
//        one = midden - 5;
//    }else if(midden == 5) {
//        four = 1;
//    }else
//    {
//        four = 0;
//        one = midden;
//    }
//    midden = moneyNumber;
//    midden2 = moneyNumber - midden;
//    midden = midden2 * 10;
//    if (midden > 0) {
//        if (midden >= 5) {
//            pointFour = 1;
//            pointone = midden - 5;
//        }
//        else
//        {
//            pointone = midden;
//        }
//    }
//    midden = midden2 *100;
//    if (midden > 0) {
//        if (midden >= 5) {
//            pointZnoeFour = 1;
//            pointZnoeOne = midden - 5;
//        }
//        else
//        {
//            pointZnoeOne = midden;
//        }
//    }
//    printf("money is : %d = 100*%d + 50*%d + 10*%d + 5*%d + 1*%d + 0.5*%d + 0.1*%d + 0.05*%d + 0.01*%d",moneyNumber,hundre,fifty,ten,four,one,pointFour,pointone,pointZnoeFour,pointZnoeOne);
    
    //判断1333
//    for (int firstNumber = 0; firstNumber <= 9;firstNumber++) {
//        for (int secondNumber = 0; secondNumber <= 9; secondNumber++) {
//            for (int thirdNumber = 0; thirdNumber <= 9; thirdNumber++) {
//                int sun;
//                sun = firstNumber*100+secondNumber*10+thirdNumber + thirdNumber*100+secondNumber*10+firstNumber == 1333? printf("a:%d,b:%d,c:%d\n",firstNumber,secondNumber,thirdNumber):sun;
//                if (firstNumber*100+secondNumber*10+thirdNumber + thirdNumber*100+secondNumber*10+firstNumber == 1333) {
//                    printf("a:%d,b:%d,c:%d\n",firstNumber,secondNumber,thirdNumber);
//                }
//            }
//        }
//    }
//    for (int firstNumber = 0; firstNumber <= 9; firstNumber++) {
//        for (int secondnumber = 0; secondnumber <= 9; secondnumber++) {
//            if (secondnumber + firstNumber == 13) {
//                printf("a:%d,b:1,c:%d\n",firstNumber,secondnumber);
//            }
//        }
//    }
//    
    
    
    
    return 0;
}
