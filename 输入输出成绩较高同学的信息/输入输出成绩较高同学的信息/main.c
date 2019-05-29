//
//  main.c
//  输入输出成绩较高同学的信息
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
        float score;
    };
    struct student stu1,stu2;
    scanf("%d%s%f",&stu1.num,stu1.name,&stu1.score);
    scanf("%d%s%f",&stu2.num,stu2.name,&stu2.score);
    if(stu1.score<stu2.score)
    {
        int m;
        m=stu1.score;
        stu1.score=stu2.score;
        stu2.score=m;
    }
    printf("%d\n%s\n%f\n",stu1.num,stu1.name,stu1.score);
    return 0;
}
