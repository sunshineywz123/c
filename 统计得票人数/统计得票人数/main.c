//
//  main.c
//  统计得票人数
//
//  Created by yuanweizhong on 17/4/23.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct student
    {
        char name[20];
        int num;
    };
    struct student leader[3]={"l",0,"m",0,"h",0};//初始化
    int i,j;
    char leader_name[20];//定义一个字符串
    for(i=0;i<3;i++)
    {
         scanf("%s",leader_name);
        for(j=0;j<3;j++)
        {
            if(strcmp(leader_name,leader[j].name)==0)
            
                leader[j].num++;
            
        }
    }
    for(i=0;i<3;i++)
    {
           printf("%s %d\n",leader[i].name,leader[i].num);
    }

    return 0;
}
