//
//  main.c
//  c_2.0_阶乘
//
//  Created by ibokan on 15/11/27.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//阶乘
int factorial(int n)
{
    long double sult = 1;
    if (n == 1 || n == 0) {
        printf("阶乘结果：1");
//        return 1;
    }
//    else
//    {
//        return n * factorial(n);
//    }
    for (; n > 0; n--) {
        sult *= n;
    }
    printf("for阶乘结果：%Lf\n",sult);
    while (n > 0) {
        sult *= n;
    }
    printf("while阶乘结果：%Lf\n",sult);
    do {
        sult *= n;
        n--;
    } while (n > 0);
    printf("do...while阶乘结果：%Lf\n",sult);
    return 0;
}
//猴子吃桃
int TheMonkeysEatThePeach(int n)
{
    int x = 0,y = 1;
    while (n-1 > 0) {
        x = (y + 1) * 2;
        y = x;
        n--;
    }
    return x;
}

//阳阳买苹果
float YangYangToBuyApple(float a)
{
    static int n = 0;
    static float money;
    if (a <= 100) {
        n++;
        money += 0.8*a;
        return YangYangToBuyApple(a*2);
        
    }
    return money/n;
}

//任意次方后的最后三位
int ArbitraryPowerAfterTheEndOfTheThree(int a ,int b)
{
    static int c = 1;
    if (b > 0) {
        c = c * a;
        b--;
        return ArbitraryPowerAfterTheEndOfTheThree(a,b);
    }
    
    return c%1000;
}

//计算某日是该年的第几天
int OneDayIsTheWhatDayOfTheYear(int year,int month,int day)
{
    int sum = 0,a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        for (; month > 0; month--) {
            sum += a[month];
        }
    }
    else
    {
        for (; month > 0; month--) {
            sum += b[month];
        }
    }
    sum += day;
    return sum;
}

//婚礼上的谎言
void LiesAtTheWedding()
{
//    char a[3]={'A','B','C'},b[3] = {'X','Y','Z'},first,second;
//    char c[3][2];
//    for (int i = 0; i < 3; i++) {
//        first = a[i];
//        for (int j = 0; j < 3; j++) {
//            second = b[j];
//            if ((first == 'A' && second == 'X') || (second == 'X' && first == 'C') || (first == 'C' && second == 'Z')) {
//                continue;
//            }
//            else
//            {
//                printf("%c -> %c\n",first,second);
//                c[i][j] = {first,second};
//            }
//            
//        }
//    }
    int a ,b ,c;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (a != 1 && c != 1 && c != 3 && a != b && a != c && c != b) {
                    printf("%c 将嫁给A\n",'X'+a-1);
                    printf("%c 将嫁给B\n",'X'+b-1);
                    printf("%c 将嫁给C\n",'X'+c-1);
                }
            }
        }
    }
}
//百元买百鸡
void OneHundredYuanToBuyTheChicken()
{
    for (int a = 0; a <= 20; a++) {
        for (int b = 0; b <= 33; b++) {
            for (int c = 3; c <= 99; c++) {
                if (a * 5 + b * 3 + c / 3 == 100) {
                    if (a + b + c == 100) {
                        if (c % 3 == 0) {
                            printf("鸡公：%d,鸡母：%d,小鸡：%d\n",a,b,c );

                        }
                    }
                }
                else{
                    continue;
                }
            }
        }
    }
}
//打渔晒网问题
void FishingNetProblem(int year,int month,int day)
{
    int newDay = OneDayIsTheWhatDayOfTheYear(year, month, day);
    int newYear = 2011;
    int midden = 0;
    for ( ; newYear <= year; newYear++) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            midden++;
        }
    }
    if ((newDay + midden*366 + (year-newYear-midden)*365) % 5 >=1 && (newDay + midden*366 + (year-newYear-midden)*365) % 5 <= 3 ) {
        printf("打渔\n");
    }
    else
    {
        printf("晒网\n");
    }
}

//判断三角形
int maxNum(int a,int b)
{
    if (a > b) {
        return a;
    }
    else{
        return b;
    }
    
}

void JudgmentOfTheTriangle(int a ,int b,int c)
{
    int arr[3] = {a,b,c},max = a,k = 0,sum = 0;
    float area ,s;
    s = (a + b + c) / 2;
    area = (float)sqrt(s*(s - a)*(s - b)*(s - c));
    for (int i = 0; i < 3; i++) {
        if (max < arr[i]) {
            max = arr[i];
            k = i;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (k != i) {
            sum += arr[i];
        }
    }
    if (sum > max) {
        printf("It is OK!\n");
        if (a == b && a == c) {
            printf("为等边三角形，面积为：%.2f\n",area);
        }
        else if (a == b || a == c || b == c)
        {
            printf("等腰三角形，面积：%.2f\n",area);
        }
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b)|| (b * b + c * c == a * a))
        {
            printf("直角三角形，面积为：%.2f\n",area);
        }
    }
    else{
        printf("No,it is no.\n");
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    //阶乘算法调用
    factorial(10000);//溢出例子
    
    //猴子吃桃
    printf("猴子吃桃：%d\n",TheMonkeysEatThePeach(10));
    
    //阳阳买苹果
    printf("阳阳买苹果：%f\n",YangYangToBuyApple(2));
    
    //任意次方后的最后三位
    printf("任意次方后的最后三位：%d\n",ArbitraryPowerAfterTheEndOfTheThree(5,2));

    //计算某日是该年的第几天
    printf("某日是该年的第几天：%d\n",OneDayIsTheWhatDayOfTheYear(2011,11,24));
    
    //婚礼上的谎言
    LiesAtTheWedding();
    
    //百元买百鸡
    OneHundredYuanToBuyTheChicken();
    
    //打渔晒网问题
    FishingNetProblem(2011,1,1);
    
    //归纳：匹配和隐形条件判断
    
    //判断三角形
    JudgmentOfTheTriangle(3, 4, 5);
    
    
    
    
    return 0;
}

