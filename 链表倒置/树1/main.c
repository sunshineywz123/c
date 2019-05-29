//
//  main.c
//  树1
//
//  Created by yuanweizhong on 17/4/26.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
struct node * newnode()  //新建一个空的结构
{
    return((struct node *)malloc(sizeof(struct node)));
}
void view()   //显示输出
{
    struct node *p=head;
    while(p)
    {
        printf("%3d",p->data);
        p=p->next;
       
       
    }
}
void relist()  //链表倒置
{
    struct node *p1,*p2,*p3;
    p1=head;
    p2=p1->next;
    p3=p2->next;
    p1->next=NULL;
    while(p3)
    {
        p2->next=p1;
        p1=p2;
        p2=p3;
        p3=p3->next;
    }
    p2->next=p1;
    head=p2;
}
int main(int argc, const char * argv[]) {
    struct node *p1,*p2;
    int i;
    head=newnode();
    p1=head;
    head->next=NULL;
    for(i=1;i<10;i++)
    {
        p2=newnode();
        p2->data=i;p2->next=NULL;
        p1->next=p2;
        p1=p2;
    }
    view();
    printf("\n");
    relist();
    view();
    printf("\n");
    return 0;
}
