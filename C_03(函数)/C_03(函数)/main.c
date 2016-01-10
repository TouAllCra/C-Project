//
//  main.c
//  C_03(函数)
//
//  Created by ibokan on 15/11/27.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
int hundred();
void sayHello();
void test();
int recursive(int a );
int sum(int n);
int main(int argc, const char * argv[]) {
    // insert code here...
    /*
     什么是函数？为什么使用函数？
        函数就是具有具体功能的自包含的代码块
        函数可以把相对独立的功能抽象出来，使之成为程序的一个独立实体，可以在同一个程序式中火其他程序中多次重复使用
    为什么使用函数？
        1，函数可以使程序变得简洁而清晰；
        2，有利于程序的维护；
        3，可以提高程序开发效率
        4，提高代码的重用性
     
     函数类型？
        1，内置函数
            内置函数：由C语言提供，用户不需要定义，也不需要再程序中作声明，只需要我们在程序前包含该函数的定义头文件（例：stdio.h的printf函数）
        2，自定义函数：
            自定义函数：程序员在程序中根据需要而编写的函数
     
     函数的定义：
        函数的语法：
            返回类型 函数名(参数列表){
                函数体；
            }
        返回类型：数据类型（整型，实型，字符型），void（无返回）
        函数名：命名规则跟变量名命名规则一样
        参数列表：用来给函数传递信息的，可有可无；如果没有的话，小括号也不能省略
        函数体：完成函数功能以及返回数据
     
     自定义函数分类;
        1,有返回值有参数；
        2，有返回值无参数；
        3，无返回值有参数；
        4，无返回值无参数；
     
     return语句的作用：用于从被调用函数返回到主函数里面
        注意：一个函数一般只有一个return，如果函数遇到return就会终止
     函数的声明：什么时候需要声明
        当我们定义的函数放在main函数后面的时候
     
     函数的调用：
        语法：函数名（实际参数列表）
        实际参数列表：参数都是有具体的值，各个参数之间用逗号隔开。实际参数类型应该和形式参数类型兼容（可以相互转换）
     形式参数于实际参数：
     1.形参可以是变量，数组；
     2.实参可以是同类型的常数，变量，数组元素，表达式，数组
     3.形参只有被调用的时候才被分配内存，在调用结束之后，立即释放被分配的内存。因此形参只能够在函数内部有效，函数调用结束返回主函数不能够再使用形参；
     4.实参可以是常量，变量，函数等等，无论实参是什么类型的量，在进行函数调用的时候，他们都必须是一份确定的值，一边把值传给形参，因此应该提前赋值，让实参获得一个确定值。
      5.形参和实参类型一致，都则会出错。
     
     变量类型按照作用域分为两种：全局变量和局部变量
        全局变量：定义函数外部，在变量定义之后函数都能够使用
        局部变量：定义函数内部，函数内部可以使用
     
     存储时长：一个变量能够在程序保存的时长
        按照存储时长分：auto,static,register,extern
        auto：默认的存储时长类型
        static:静态类型，变量的生命周期和程序一样长
        auto，static，register可以修饰局部变量；extern，static可以修饰全局变量
     
     函数嵌套调用还有地柜调用
     嵌套调用：从一个函数调用另外一个函数，成为函数的嵌套调用
     地柜调用：在一个函数内部嗲用函数自身，成为函数的递归调用
     
    */
    int a = 0,b = 2;
    a = sum(b);
    printf("a = %d\n",a);
    printf("sum = %d\n",sum(5));
    int c = 0;
    c = hundred();
    printf("%d",c);
    sayHello();
    printf("Hello, World!\n");
    for (int i = 0;  i< 5; i++) {
        test();
    }
    int z = sum(hundred());
    printf("%d",z);
    long double y = recursive(10);
    printf("%Lf",y);
    return 0;
}

void test(){
    static int i = 0 ;
    printf("i= %d\n",i);
    i++;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n;i++) {
        sum += i;
    }
    return sum;
}

int hundred(){
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("sum = %d\n",sum);
    return sum;
}

void sum2(int a ,int b)
{
    printf("a = %d,b = %d\n",a,b);
}

void sayHello()
{
    printf("Hello World!\n");
}

int recursive(int a ){
    if (a == 1) {
        return 1;
    }
    else{
        return a * recursive(a-1);
    }
}

