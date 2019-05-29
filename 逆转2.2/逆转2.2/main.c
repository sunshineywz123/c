//
//  main.c
//  逆转2.2
//
//  Created by yuanweizhong on 17/4/26.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>
#define LENGTH 10
int main() {
    int a[LENGTH];
    int i,j;
    int tmp;
    printf("逆转前：");
    for(i=0;i<LENGTH;i++)
    {
        a[i]=i;
        printf("[%d]",a[i]);
    }
    printf("\n");
    i=0;
    j=LENGTH-1;
    while(1)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        if(j-i==1||j-i==2)
        {
            break;
        }
        i++;
        j--;
    }
    printf("逆转后：");
    for(i=0;i<LENGTH;i++)
    {
        printf("[%d]",a[i]);
    }
    printf("\n");
    return 0;
}
