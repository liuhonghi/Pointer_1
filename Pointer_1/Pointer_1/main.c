//
//  main.c
//  Pointer_1
//
//  Created by HiLau on 2023/6/19.
//

#include <stdio.h>

//2023-6-19
//指针初阶1
//指针类型 - 1、指针类型决定了指针解引用的权限有多大：int型能访问四个字节，char型只能访问一个字节
//        - 2、指针类型决定了指针走一步能走多远（步长）
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        *(p+i) = 1; //p+i其实是下标为1的地址; *(p+i)=1 - 把数组全改为1
//    }
//    return 0;
//}

//野指针
//1、指针未初始化
//int main()
//{
//    int* p;  //p是一个局部的指针变量，不初始化会默认是随机值
//    *p = 20;  //此时非法访问内存
//    return 0;
//}

//2、指针越界访问
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<=10;i++)  //此时循环了十一次
//    {
//        *p = i;
//        p++;               //当第十一次时，造成越界访问
//    }
//    return 0;
//}

//3、指针指向的空间释放
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//
//int main()
//{
//    int* p = test();
//    *p = 20;
//    return 0;
//}

//如何避免野指针
//1、指针初始化
//2、小心指针越界
//3、指针指向空间释放即使置NULL
//4、使用指针之前检查有效性


//指针运算
//1、指针 +- 整数
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for(vp = 0;vp< &values[N_VALUES];)
//{
//    *vp++ = 0; //把数组初始化
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* p = arr;
//    int *pend = arr+9;
//    while(p<=pend)
//    {
//        printf("%d ",*p);
//        p++;
//    }
//    printf("\n");
//    return 0;
//}

//2、指针 - 指针
//指针和指针相减的前提：两个指针指向同一块空间
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[9] - &arr[0]); //9 - 指针减指针得到的是两个指针之间的元素个数
//    return 0;
//}

//用指针 - 指针 写一个计算字符串长度的函数my_strlen
//int my_strlen(char* str)
//{
//    char* start = str;
//    while(*str != 0)
//    {
//        str++;
//    }
//    return str - start;
//}
//
//int main()
//{
//    char arr[]="abc";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}


//3、指针的关系运算
//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较（方法A），但是不允许与指向第一个元素之前的那个内存位置的指针进行比较（方法B）；
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
////A
//for(vp = &values[N_VALUES];vp > &values[0];)
//{
//    *--vp = 0;
//}
//
////B
//for(vp = &values[N_VALUES - 1];vp >= &values[0];vp--)
//{
//    *vp = 0;
//}


//指针和数组
//数组名是数组首元素的地址
//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n",arr);
//    printf("%p\n",&arr[0]);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        printf("%p == %p\n",&arr[i],p+i);
//        *(p+i) = i;
//    }
//    for(i = 0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* p = arr;
//    //arr[2] == *(p+2) == *(2+p) == *(2+arr) == *(arr+2) == 2[arr]
//    printf("%d\n",arr[2]); //3
//    printf("%d\n",2[arr]); //3
//    printf("%d\n",p[2]);   //3
//    return 0;
//}



//二级指针
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int* *ppa = &pa;
//    **ppa = 20;
//    printf("%d\n",a);
//    return 0;
//}


//指针数组

