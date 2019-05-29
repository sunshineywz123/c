//
//  main.c
//  结构体1
//
//  Created by yuanweizhong on 17/4/23.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct student
    {
        int num;
        char name[20];
        char sex;
  
        char adress[20];
    };
    struct student a={10101,"LiMin",'M',"123 Beijing Road"};
    printf("num:%ld\nname:%s\nsex:%c\nadress:%s\n",a.num,a.name,a.sex,a.adress);
    return 0;
}
