//
//  main.c
//  输出不合格成绩
//
//  Created by yuanweizhong on 17/4/26.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    void check(int *);            //函数声明
    int *p1,i;           //p1是int型指针
    p1=(int *)malloc(5*sizeof(int));  //开辟动态内存区，将地址转换为int *型，然后放在p1中
    for(i=0;i<5;i++)
        scanf("%d",p1+i);   //输入5个同学的成绩
    check(p1);
    return 0;
}
void check(int *p)   //定义check函数，形参是int *指针
{
    int i;
    printf("They are fail:\n");
    for(i=0;i<5;i++)
        if(p[i]<60)
            printf("%d\n",p[i]);           //输出不合格成绩
    printf("\n");
}
