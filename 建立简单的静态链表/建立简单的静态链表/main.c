//
//  main.c
//  建立简单的静态链表
//
//  Created by yuanweizhong on 17/4/26.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>
struct Student
{
    int num;
    float score;
    struct Student *next;
};
int main() {
    struct Student a,b,c,*head,*p;
    a.num=10101;a.score=87.5;
    b.num=10103;b.score=90;
    c.num=10107;c.score=85;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do
    {
        printf("%1d%5.1f\n",p->num,p->score);
        p=p->next;
    }
    while(p!=NULL);
    return 0;
}
