//
//  main.c
//  c_4(作业)
//
//  Created by ibokan on 15/11/30.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int year;
    int month;
    int day;
    
}isYear;

//按逆排序
void InReverseOrder(int arr[5])
{
    int arr1[5],j=4;
    for (int i = 0; i < 5; i++) {
        arr1[i] = arr[j];
        j--;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d",arr1[i]);
    }
    printf("\n");
}
//判断本年第几天
void whichDay(int year,int month,int day)
{
    int noLeapYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int leapYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sumDay = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ) {
        for (int i = 0; i < month; i++) {
            sumDay += leapYear[i];
        }
    }
    else
    {
        for (int i = 0; i < month; i++) {
            sumDay += noLeapYear[i];
        }
    }
    sumDay += day;
    printf("Day is : %d\n",sumDay);
    
}
//字母排序
void AlphabeticalOrder(char alph[10])
{
    char temp;
    int res;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++) {
            if (alph[j] > alph[j+1]) {
                temp = alph[j];
                alph[j] = alph[j+1];
                alph[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%c ",alph[i]);
    }
    printf("\n");
}

//随机数计算
void RandomNumberCalculation()
{
    char num[20];
    int max,min,sum;
    float avg;
    for (int i = 0; i < 20;  i++) {
        num[i] = arc4random()%40+10;
    }
    max = num[0];
    min = num[0];
    for (int i = 0;i < 19;i++) {
        if (max < num[i+1]) {
            max = num[i+1];
        }
        if (min > num[i+1]) {
            min = num[i+1];
        }
        sum += num[i];
        printf("%d ",num[i]);
    }
    printf("\n");
    avg = sum / 20;
    printf("max:%d,min:%d,sum:%d,avg:%f\n",max,min,sum,avg);
}

//子函数
//冒泡升序
void SUB1(int arr[10])
{
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }
}
//插入升序
void SUB2(int newNum,int arr[10])
{
    int temp;
    char newArr[11];
    for (int i = 0; i < 10; i++) {
        if (newNum < arr[i]) {
            temp = arr[i];
            arr[i] = newNum;
            newNum = temp;
        }
    }
    
    for (int i = 0; i < 11; i++) {
        newArr[i] = arr[i];
        if (i == 10) {
            newArr[i] = newNum;
        }
    }

}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int arr[5] = {8,6,5,4,1};
    InReverseOrder(arr);
    
    isYear aYear = {2015,11,25};
    whichDay(aYear.year, aYear.month, aYear.day);
    
    char alphNum[10] = {"reputation"};
    AlphabeticalOrder(alphNum);
    
    RandomNumberCalculation();
    
    int arrNum[10] = {4,8,9,5,6,7,0,1,10,12};
//    SUB1(arrNum);
    
    
    return 0;
}
