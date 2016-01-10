//
//  main.c
//  c_05(指针)
//
//  Created by ibokan on 15/12/1.
//  Copyright © 2015年 ibokan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char *name;
    float number;
    char sex;
    int age;
    
};

void printStudent(struct Student *stu)
{
    printf("学号:%f，姓名:%s，性别:%c\n",stu->number,stu->name,stu->sex);
}


void exchang(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void exchange2(int *x,int *y)
{
    printf("a2 = %p,a3 = %p\n",x,y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a2 = %p,a3 = %p\n",x,y);
}

int *getArray()
{
    static int array[5] = {1,2,3,4,5};
    return array;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    /*
     指针：
    数据访问的两种方式：直接访问和间接访问
     直接访问：使用变量来储存数据，再从变量取出数据都属于直接 访问。例如：int i = 10;printf("%d",a);
     间接访问：使用一个特殊的类型的变量用来存放我们的地址。类似：2000（地址）。这些地址变量的值看上去像整型数据，不够不应该看成一个整型数据处理。
     指针是什么？
        指针是一个特殊的变量，它里面存储的数值被解释为内存的一个地址。
     
     指针的声明
        我们提到间接访问是，提到指针变量？在C语言里面，没有一种专门的关键字给指针变量声明。因为我们关心的是指针指向的位置能够保存什么数据类型，所以，一个指针的声明的格式为：
        数据类型 *指针变量名
     数据类型类：为指针变量所存储的指针指向的存储单元的数据类型
     指针变量名称用于命名该指针，以访问该指针变量
    
     指针的复制
        在声明指针变量之后。需要对指针变量进行赋值
     *&& 取内容和取地址
    *的几种用法：
        1.在表达式中，*号两边都用表达式的话，*号就是一个简单地乘法运算符
        2.在声明语句中，*号表明后面的变量为一个指针形式的变量
        3.*不在声明语句中，而且只是右边有一个表达式的话，*表示去*后面变量中存放的地址对应内存中值
     指针作为函数参数
        一个基本数据类型作为函数参数的时候，传递的只是将参数的值复制带入函数内部操作。也知道数组作为函数参数的时候是将地址函数内部操作。所以一个基本数据类型作参数时，函数内部改变值并不会影响主调函数的传入变量的值，而数组作参数是，函数内部改变数组的值会使主调函数外的数组值发生改变。
        类似，我们现在也可以像数组一样在函数内部修改数组的值之后函数外同样受到影响。用指针作为参数传递。注意：如果函数声明为指针类型之后，那么该参数能够接受地址型数据才可以，并且参数类型一致。否则，发生不匹配。
     
    数组与指针
        数组是由多个数据类型的元素组成序列。在内存中咱有连续的存储单元，指针也可以指向这些数组元素。
        我们之前可以通过下标来访问数组的元素。为什么我们还需要使用指针来对数组进行访问呢？因为数组下标需要通过进行偏移量的计算才找到目标的元素。而指针可以直接访问。所以通过指针的访问速度快于通过下标访问
     
     规定：在C语言中，如果指针p指向的是数组的某个元素，那么p+1就是指向数组的下一个元素。所以我们可以通过对指向数组元素的指针进行移动来遍历整个数组。
     
     二维数组和指针：
        int arr[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
        arr代表数组首元素地址，等价于&arr[0][0];
        arr+1代表数组第二行第一列首元素地址
        如果我们像获得第三行第二列的元素，*(*(arr+2)+1);
     
     字符串和数组
        我们之前讲到数组和指针的关系，所以说字符串和指针之间是由关系的，因为我们字符串本身就是字符数组。所以我们可以使用指针处理字符串。
     
     指针作为函数的返回值
     冤案本函数的返回值知识基本数据类型，现在我们使用指针作为含税返回值，函数将返回地址型数据。
     例如：int *getArray();
     基本形式：数据类型 *函数名（参数列表）;
     注意：不要返回函数内部声明的局部自动性变量。因为局部自动型变量在函数调用完毕之后就会被销毁，而外部接受了一个被销毁的变量的存储单元地址，而该数据可能被其他数据覆盖，所以这里我们返回变量类型需要外一个静态局部变量
     
     指针数组
        指针数组和整型数组类似。整型数据代表里面的元素都是整型数据，为指针数组就代表里面的元素都是指针，里面的指针可以继续指向其他地址。
     指针数组的定义：
        数据类型 *指针名[长度]；
     例如： int *p[4];
     这里中括号优先级比*好高，所以首先结合p[4] ,表明这是一个数组的形式，里面有4个元素，而每一个元素都是指向整型数据的指针。
     指针数据适合指向多个字符串，这样多个字符串处理起来比较方便。
     
     数组指针
        数组指针容易跟指针数组搞混，注意，指针数组是一个数组。初始化的时候需要多个地址数据，而数组指针值需要一个地址数据就可以初始化了。联想一下之前说的的二维数组，二维数组每一行也是一个一维数组，而数组指针也是指向一个数组的，所以数组也被称为行指针，定义如下：
        数据类型（*数组指针变量名）[长度]；
        int(*p)[4]; 
        这里小括号不能够省略，不然成了指针数组，我们在使用小括号来提升*好优先级，表示*p对应一个4个元素的整型数组。该指针只能指向一个包含4个整型元素的数组。如果要进行赋值，可以直接使用二维数组的名称为该变量赋值。
     指针的指针
        我们之前使用的指针都是直接指向一个地址，而该地址存储的是一个实际数据，其实地址也是一个数据。同样可以定义一个指针来指向一个地址，而这个地址存储的也是一个地址数据，而该指针数据指向的才是实际数据，我们简称这种指针为指针的指针。
     结构体指针变量：
        结构体指针指向的是结构体变量的首地址
        语法：
        struct 结构体名 * 结构体指针变量名;
        或
        typedef struct 定义的结构体的名字 *结构体指针变量名
        结构体指针访问结构体变量成员
        (*结构体指针名).成员名
        或
        结构体指针变量名->成员名
     
     
     */
    
    
    
    printf("Hello, World!\n");
    
    int a;
    printf("%d",&a);
    printf("%p\n",&a);
    int *p_i;
    char *p_c;
    double *p_d;
    
    //指针的赋值
    int *p_i1;
    int a1 = 10;
    p_i1 = &a1;
    
    int *p_i2 = &a1;
    
    int i = 10,j = 20l;
    printf("i = %d,j = %d\n",i,j);
    int *p_i4,*p_j4;
    p_i4 = &i;
    p_j4 = &j;
    printf("p_i = %d,p_j = %d\n",*p_i4,*p_j4);
    printf("i的地址16进制 %p,j的地址16进制 = %p\n",p_i4,p_j4);
    printf("i的地址十进制:%d,j的地址十进制:%d\n",p_i4,p_j4);
    i = 100;
    j = 200;
    printf("p_i = %d,p_j = %d\n",*p_i4,*p_j4);
    *p_i4 = 1000;
    *p_j4 = 2000;
    printf("i = %d, j = %d\n",i,j);
    
    int a2 = 10,a3 = 20;
    exchange2(&a2,&a3);
    printf("a2 = %d,a3 = %d\n",a2,a3);
    printf("a2 = %p,a3 = %p\n",a2,a3);
    exchang(&a2,&a3);
    printf("a2 = %d,a3 = %d\n",a2,a3);
    
    //指针与数组
    int array[5] = {0,22,2,3,4};
    printf("a[4] = %d\n",array[4]);
    
    int *p_array;
    p_array = array;
//    p_array = &array[0];
//    p_array = &array[2];
//    printf("*p_array = %d\n",*p_array);
//    
//    printf("*p+1 = %d\n",*(p_array+1));
//    for (int i = 0; i < 5; i++) {
//        printf("%d ",*p_array++);
//    }
    
    for (int i = 3; i > 0; i--) {
        int temp;
        temp = *p_array;
        *p_array = *(p_array+i+1);
        *(p_array+i+1) = temp;
        
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ",*p_array++);
    }
    printf("\n");
//    int arrayTemp[5];
//    for (int i = 4; i >= 0; i--) {
//        arrayTemp[i] = *p_array++;
//    }
//    for (int i = 0 ; i < 5; i++) {
//        printf("%d ",arrayTemp[i]);
//    }
//    
//    
//    
//    printf("\n");
//    *p_array++;
//    (*p_array)++;
    
    //二维数组
    int arr2[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
    
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",*(*(arr2 + i) + j));
        }
                   printf("\n");
    }
    int size = sizeof(arr2);
    printf("%p\n",*arr2);
    printf("%p\n",&arr2[0][0]);
    printf("%p\n",*(arr2 +1));
    printf("%p\n",&arr2[1]);
    printf("%p\n",*(arr2 +2));
    printf("%d\n",size);
    
    int *p_arr2;
    p_arr2 = arr2[0];
//    p_arr2 = &arr2[0][0];
    p_arr2 = *arr2;
    
    //下标法
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",*(*(arr2+i)+j));
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",*((p_arr2+i*4)+j));
        }
        printf("\n");
    }
    
    for (int i = 0; i < 12; i++) {
        printf("%d ",*p_arr2+i);
    }
    printf("\n");
    
    
//    int *p_mal;
//    p_mal = (int *)malloc(5 * sizeof(int));
//    printf("请输入5个:\n");
//    for (int i =0; i < 5; i++) {
//        scanf("%d",p_mal+i);
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d ",*(p_mal + i));
//    }
//    free(p_mal);
//    printf("\n");
//    
//    int *p_cal;
//    p_cal = (int *)calloc(5, sizeof(int));
//    printf("请输入5个:\n");
//    for (int i =0; i < 5; i++) {
//        scanf("%d",p_cal+i);
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d ",*(p_cal + i));
//    }
//    free(p_cal);
//    printf("\n");
    
    //字符串和指针
    char str[] = "Hello World!";
    char *p_str;
    p_str = str;
    
    char *p_str1 = "Hello World";
    printf("p_str = %s\np_str1 = %s\n ",p_str,p_str1);
    
    char string1[] = "Hello World!";
    char string2[13];
    char *p_string1,*p_string2;
    p_string1 = string1;
    p_string2 = string2;
    printf("复制之前：string1 = %s\n",string1);
    printf("复制之前：string2 = %s\n",string2);
//    *p_string2 = *p_string1;
//    printf("%s\n",string1);
//    printf("%s\n",*(&string2));
    for (int i = 0; i <13; i++) {
        *p_string2++ = *p_string1++;
    }
    printf("%s\n",string1);
    printf("%s\n",string2);
    
//    for (int i = 0; i <= 13; i++) {
//        for (int j = 12; j > 0; j--) {
//            *(p_string2+j) = *p_string1+13;
//        }
//    }
    
    for (int j = 0; j < 1; j++) {
        *(p_string2+j) = *(p_string1+12);
    }
    printf("%s\n",string1);
    printf("%s\n",string2);
    
    //字符串数组和指针
    char strings[3][20] = {
        "hwllo world ",
        "Hello world ",
        "Hello World "
    };
    char *p_strings;
    p_strings = strings[0];
    for (int i = 0; i < 3; i++) {
        printf("%s ",p_strings+i*20);
    }
    printf("\n");
    for (int i = 0; i < 3 ; i++) {
        printf("%s ",*(strings+i));
    }
    printf("\n");
    for (int i = 0; i < 60; i++) {
        printf("%c",*p_strings++);
//        if (i != 0 && i%19 == 0 ) {
//            printf("\n");
//        }
        if (i == 19 || i == 39) {
            printf("\n");
        }
    }
    printf("\n");
    
    //指针数据
    
    int a10 = 10,a20 = 20,a30 = 30;
    int *p_arrays[4] = {&a10,&a20,&a30};
    
    
    //用指针数组处理二维数组，因为二维数组就是一位数组的数组
    int array2[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int *p_array2[3];
    for (int i = 0; i < 3; i++) {
        p_array2[i] = array2[i];
        for (int j = 0; j < 4; j++) {
            printf("%d ",*(p_array2[i]+j));
        }
        printf("\n");
    }

    char *msg1 = "How are you?";
    char *msg2 = "I am fine 3Q";
    char * msg3 = "how alo are you?";
    char *p_msg[3] = {msg1,msg2,msg3};
    for (int i = 0; i < 3; i++) {
        printf("%s \n",p_msg[i]);
    }
    
    char *bookName[5] = {
        "C Plus Plus",
        "Objective-c Basic",
        "Visual C++ 2010",
        "Learn Objective-C on the Mac",
        "Beginning iPone 4 Development"
    };
    for (int i = 0; i < 5; i++) {
        printf("%s\n ",bookName[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 4; i < j ; j--) {
            if (strcmp(bookName[i], bookName[j])>0) {
                char *temp;
                temp = bookName[j];//地址
                bookName[j] = bookName[i];
                bookName[i] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n ",bookName[i]);
    }
    printf("\n");
    
    //直接插入排序
    
//    char *temp1 = bookName[i];
//    for (int k = 0; k < 4; k++){
//        for (int j = 4; k < j; j--) {
//            if (strcmp(bookName[k], bookName[j]) > 0) {
//                temp1 = bookName[k];
//                bookName[j] = bookName[j-k+1];
//                bookName[k] = temp1;
//            }
//        }
//    }
//    
    
    
    for (int i = 0; i < 5; i++) {
        printf("%s\n ",bookName[i]);
    }
    printf("\n");
    
    //数组指针
    int array3[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,22,23}
    };
    int (*p_array3)[4];
    p_array3 =array3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",*(*p_array3+j));
        }
        printf("\n");
        p_array3++;
    }
    
    char **p_p;
    char *name[] = {
        "basic",
        "c++",
        "oc",
        "c#"
    };
    for (int i = 0; i < 4; i++) {
        p_p = name+i;
        printf("%s\n",*p_p);
    }
    
    struct Student stu;
    struct Student *p_stu;
    
    p_stu = &stu;
    stu.name = "张三";
    stu.age = 10;
    stu.number = 10;
    stu.sex =  'F';
    printf("通过结构体打印数据：\n");
    printf("学号：%f，姓名：%s,性别：%c\n",stu.number,stu.name,stu.sex);
    printf("通过结构体指针打印数据1：\n");
    printf("学号:%f，姓名:%s，性别:%c\n",(*p_stu).number,(*p_stu).name,(*p_stu).sex);
    printf("通过结构体指针打印打印数据2：\n");
    printf("学号:%f，姓名:%s，性别:%c\n",p_stu->number,p_stu->name,p_stu->sex);
    printStudent(&stu);
    printStudent(p_stu);
    
    return 0;
}
