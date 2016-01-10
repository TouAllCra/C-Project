//
//  main.c
//  c_04()数组跟结构体
//
//  Created by ibokan on 15/11/30.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void changeVar(int a)
{
    a = 2000;
}
float getAvg1(int arr[3][4])
{
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    printf("%f\n",sum);
    return sum/12;
}
void getAvg2(int arr[][4])
{
    
}

void changArray(int a[5])
{
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
}

//struct student
//{
//    int age;
//    char name[];
//    
//};

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    /*
     数组：把具有相同类型的若干变量按照有序的形式组织起来，这些按序排列的同类数据元素集合成为数组
        一个数组我们可以分解为多个数组元素，在C语言里面，数组属于构造数据类型。数组的元素可以基本数据类型，也可以是构造数据类型。数组是一串连续的地址空间
     数组可以分为一维数组，二维数组或者多维数组；
     
     一维数组：具有相同基本数据类型的单一元素组成的数组称为一维数组。它是一个使用一个组名来存储相同类型的数值列表。
     一维数组的语法定义：
        数据类型 数组名[长度] = {值1，值2，....};
        注意的：长度是常量或者是常量表达式.数组声明的时候必须赋值给数组制定长度告诉编译器你申请的内存空间的大小。
     一维数组的初始化：
        在定义一维数组的时候可以进行数组的初始化，对数组内全部元素或者部分元素进行赋值。
     数组初始化只能在定义的术后进行。不能定义完成进行初始化。
     一维数组的使用：
        使用数组的一般形式：数组名[下标]
        下标：表示元素在数组中的序号，只能够为整型的常量或者整型表达式、数组的下标也称数组的索引。下标从0开始
     
     一维数组作为函数参数：
        如果数组作为函数的参数进行传递时，不是将数组进行复制，而是将该数组本身传入函数内部，所以在函数内部改变或者操作的数据其实就是改变函数外部所定义的数组。
     
     字符串：使用双引号引起来的字符序列。也称为字符串常量，在储存字符串的时候我们会在结尾加上NULL符号常量，也就是'\0'也就是我们的ASCII表中得值为0.字符串会以这个符号常量作为结束标志。然后存储到一个字符数组内。
     
     字符串并不是一个基本的数据类型，所以无法进行四则运算或者关系运算，逻辑运算。但是C语言提供了一系列的操作字符串的函数，要使用这些函数需要导入string.h文件。
     strcpy(str1,str2):将str2的内容拷贝到str1中。注意：如果str2的内容比str1的容量大的话，则多余部分会覆盖到其他区域，这样是很危险的，我们的职责是保证str1能容纳str2的内容。
     strcat(str1,str2)：将sstr2的内容追加到str1后面，并且将str1的最后的'\0'去掉。注意：str1能够有足够大得容量容纳str2.
     strlen(str):返回字符串的长度，不包括最后的'\0'
     strcmp(str1,str2):比较str1和str2的字符串的大小。str1小于str2则返回负整数，等于返回0，大于返回正整数。比较方式：先从第一个字符开始比较，如果相等继续比较第二个字符直到最后，若全部相等（长度和内容都相等）才返回0.
     
     getchar():字符输入函数。作用：从标准输入设备读取下一个字符，成功返回字符都则返回-1
     putchar():字符输出函数。作用：把字符输出到标准输出设备。若成功返回该字符的ASCII值，失败返回一个文件结构EOF(Ebd of File)
     gets():字符串输入函数。作用：将字符数组的字符串输出到标准输出设备中，将'\0'转换为回车换行显示，成功返回换行符否则返回EOF
     puts()：字符串输出函数。作用：从标准输入设备中读取一个字符串。成功返回首地址，否则返回空指针
     
     二维数组：数组的数组，有时候称二维数组为一个表，由元素的行和列组成
        语法：数组类型 数组名[常量表达式][常量表达式];
     
     二维数组作为参数：
     二维数组可以同理可以作为参数进行传递。并且二维数组传递的依然是一个地址，所以我们可以参考一维数组作为参数的情况。注意，作为二维数组作为参数，二维数组的列数不可以省略。
     
     字符串数组
     
     
     
     typedef：关键字：
        在C语言内，不仅提供了丰富的数据类型，还允许用户自动以数据类型说明符，也就是为数据类型区“别名”，使用类型定义符typedef来完成。
        语法：
        typedef 原数据类型名 新数据类型别名
     结构体：由若干个数据组合而成的复杂数据对象，这些数据项称为结构体成员。
     结构体语法定义：
        struct 结构体名 {类型 变量名；类型 变量名};
     
     结构体访问通过“.”来访问
     注意：结构体不会预留内存。一般放在文件开头，位于导入头文件后。
     
     
     */
    
    int a[5];
    char b[10];
    int c[5] = {1,2,3,4};//对数组部分元素进行初始化
    int d[5]= {10,7,5,9,8};//对数组全部元素进行初始化
    printf("%lu\n",sizeof(c));
    int max,max2;
//    for (int i = 0; i < 4; i++) {
//        max = d[i];
//        if (max > d[i+1]) {
//            d[i] = d[i+1];
//            d[i+1] = max;
//        }
//        printf("%d ",d[i]);
////        d[i] = d[i+1];
////        printf("%d ",max);
//    }
//    printf("\n");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ",d[i]);
//    }
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            if (d[j] > d[j+1]) {
                temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ",d[i]);
    }
    printf("\n");
    
    
    
    //一维数组作为函数参数
    int e = 10;
    changeVar(e);
    printf("e = %d\n",e);
   
    int f[5] = {1,2,3,4,5};
    changArray(f);
    for (int i=0; i<5; i++) {
        printf("%d ",f[i]);
    }
    printf("\n");
    //字符数组
    char g[]  = {'H','e','l','l','o'};
    char h[] =  "Hello World!";
    printf("h = %lu\n",sizeof(h));
    for (int i = 0; i < 13; i++) {
        printf("%c",h[i]);
    }
    printf("\n");
    int i = 0;
    while (h[i] != '\0') {
        printf("%c",h[i]);
        i++;
    }
    printf("\n");
    printf("%s",h);
    printf("\n");
    
    //字符串函数
    char str1[] = "Hello";
    char str2[] = "Hello World";
    char str3[] = "Hello C";
    char str4[] = "Hello c";
    int strlength;
    int res;
    strcpy(str2, str1);
    printf("str2 = %s\n",str2);
    strcat(str2, str1);
    printf("str2 = %s\n",str2);
    strlength = (int)strlen(str2);
    printf("strLength = %d\n",strlength);
    res = strcmp(str3, str4);
    printf("res = %d\n",res);
    
    //字符，字符串输入输出函数
    char j;
    j = getchar();
    putchar(j);
    putchar('\n');
    char k[50];
    gets(k);
    puts(k);
    
    //二维数组的声明
    int l[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    int m[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int n[][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    
    printf("第二行第二个数字为：%d\n",l[1][1]);
    
    printf("%f",getAvg1(l));
    //二维数组遍历
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 4; y++) {
            printf("%d ",l[x][y]);
        }
        printf("\n");
    }
    //字符串数组声明
    char q[][20] ={
        "Hello",
        "World ,",
        "Nice to meet you"
    };
    for (int i = 0; i < 3; i++) {
        printf("%s ",q[i]);
    }
    printf("\n");
    
    //typedef类型定义符
    typedef int Integer;
    Integer r,s;//等价于int r,s;
    //再例如
    typedef char Name[20];
    Name r1 = "Hello ",s1 = "world";//等价于char r1[20],s1[20];
    strcat(s1, r1);
    printf("%s",s1);
    
    //结构体声明
    
    struct student{
        int age;
        char name[20];
        
    };
    typedef struct{
        int age;
        char name[20];
    }Student;
    
    struct teacher{
        int age;
        char name[20];
    }tea1,tea2;
    struct{
        int age;
        char name[20];
    }tea3,tea4;
    
    struct student stu1 = {15,"张三"};
    printf("%d,%s\n",stu1.age,stu1.name);
    
    Student stu2 = {18,"李斯"};
//    tea2 = {20,"万物"};
    struct teacher tea1 = {12,"yuyu"};
    return 0;
}
