//
//  main.c
//  c_02(流程控制)
//
//  Created by ibokan on 15/11/26.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    //顺序结构
    printf("Hello, World!1\n");
    printf("Hello, World!2\n");
    printf("Hello, World!3\n");
    
    //分支结构
    //if语句的语法
//    if (表达式)
//    {
//        语句块
//    }
//    表达式里面的值结构数据类型为整型，如果它的值为非0得话，就执行语句块1，否则跳过语句1继续执行语句块2；
    //if...else语法：
//    if (表达式1) {
//        语句块1；
//    } else {
//        语句块2；
//    }
//    语句块3；
    //表达式结果数据类型为整型，如果他的值为非0的话，就执行语句块1，否则执行语句块2，然后退出这个分支结构，执行语句块3；
    //if...else具有一个二选一的特点
    //if...else if...else链
//    if (表达式1)
//    {
//        语句块1；
//    }
//    else if(表达式2)
//    {
//        语句块2；
//    }
//    else
//    {
//        语句块3；
//    }
//    语句块4；
//    表达式1和表达式2的值都为整形，如果表达式1 结果非0，就执行语句块1，否则如果语句块1结果非0，就执行语句块2，否则执行语句块3 最后跳出分支语句，执行语句块4；
    
    //if嵌套
    
     if（表达式1）
     {
        语句块1；
        if(表达式2)
        {
            语句块2；
        }
     }
     表达式1的结果为真的时候，进入分支，执行到表达式2，如果为真，就执行语句块2.
    
     枚举语法：
     enum 枚举名{
        枚举值1，
        枚举值2，
        枚举值3，
        ...
        枚举值n
     
     }；
     相当于自定义一个数据类型，类似于整型。
     使用的时候：
    enum 枚举名 变量名；
     
     */
    /*
    循环结构： 循环就是重复。循环结构可以减少源程序中书写的工作量，用来描述重复执行的预付。这是程序设计最能发挥出计算机特长的程序结构
     循环结构三个要素：循环变量，循环体，和循环终止条件。
     while循环语法：
    while（表达式）{
        循环语句；
     }
    先判断表达式，如果为真就执行循环语句，否则跳出循环。
     
     do...while循环语法：
     do{
        循环语句；
     }while(表达式)
     先执行循环语句，再对表达式进行判断，如果为真，则继续执行循环，否则跳出循环
     
     for循环语句：
     for(表达式1;表达式2;表达式3){
        循环语句；
     }
     表达式1：对循环变量赋初值
     表达式2:循环条件判断
     表达式3：循环变量改变
     先执行表达式1，然后对表达式2进行判断，如果为真则执行循环语句，然后执行表达式3，再次对表达式2进行判断，直到表达式2结构为假使，跳出循环。
   
     break语句跳出本层循环
     continue语句跳出本次循环
     
     循环嵌套：有时一个循环不能解决的问题需要多个循环来处理
     循环1{
        循环2{
      
        }
     }
     
     
    int isSun;
    printf("请输入今天天气是否为晴天，是的话输入1，否则输入0:\n");
    scanf("%d",&isSun);
    if (isSun>0 )
    {
        printf("今天天气好，出去玩\n");
    }
    
    if (isSun) {
        printf("今天天气好，出去玩\n");
        if(isSun)
        {
            printf("今天天气好，我要出门\n");
            int money;
            printf("我身上现金有：\n");
            scanf("%d",&money);
            if (money > 100) {
                printf("可以去网吧了\n");
            }else
            {
                printf("没钱只能玩泥沙\n");
            }
        }
    } else {
        printf("今天天气不好，呆在家里\n");
    }
    
    
    
    
    int grade;
    printf("请输入你的成绩：\n");
    scanf("%d",&grade);
    if (grade < 0 || grade > 100) {
        printf("你输入的成绩有误\n");
    }
    else if (grade == 100){
        printf("你考试满分，好棒哦\n");
    }
    else if (grade >= 90){
        printf("你考试等级为优秀，好厉害\n");
    }
    else if (grade >= 75){
        printf("你的考试等级为良好\n");
    }
    else if (grade >= 60){
        printf("你的考试等级为及格\n");
    }
    else{
        printf("你考试不及格\n");
    }
    */
/*    enum weekday{
        monday = 1,
        tuesday,
        wednessday,
        thursday,
        friday,
        staurday,
        sunday
    };
    
    enum weekday today;
//    today = staurday;
//    printf("%d\n",today);
    printf("请输入今天星期几:\n");
    scanf("%d",&today);
    switch (today) {
        case monday:{
            printf("今天是星期一\n");
        }
            break;
        case tuesday:{
            printf("今天是星期二\n");
        }
            break;
        case wednessday:{
            printf("今天是星期三\n");
        }
            break;
        case thursday:{
            printf("今天是星期四\n");
        }
            break;
        case friday:{
            printf("今天是星期五\n");
        }
            break;
        case staurday:{
            printf("今天是星期六\n");
        }
            break;
        case sunday:{
            printf("今天是星期日\n");
        }
            break;
        default:
            printf("输入有误");
            break;
    }
    printf("分支结束");
    
    int i = 1;
    int sum;
    while (i <= 10) {
        sum += i;
        i++;
        printf("sum = %d\n",sum);
    }
    printf("sum = %d\n",sum);
    
    int a = 1;
    int sum2 = 0;
    do {
        sum2 += a;
        a++;
    } while (a <= 10);
    printf("sum = %d\n",sum2);
    int sum3 = 0;
    for (int sum3=0,b = 1; b <= 10; b++) {
        sum3 += b;
         printf("b = %d\n",sum3);
    }
    printf("b = %d\n",sum3);
    */
    
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= i; j++) {
//            int sum;
//            sum = i * j;
//            if (i >= 3 || j >= 3) {
//                if ( i <= 4 || j <= 4) {
//                    printf("%d * %d = %d  ",j,i,sum);
//                }
//            }
//            printf("%d * %d = %d",j,i,sum);
//        }
//        printf("\n");
//        
//    }
//    
//    int a = 1;
//    while (a <= 5) {
//        int b = 1;
//        while (b <= a) {
//            printf("*");
//            b++;
//        }
//        printf("\n");
//        a++;
//    }
//    
    
    
    
    return 0;
}
