#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};
int n;      //n为全局变量
struct Student *cr(void)    //定义一个返回一个指向链表头指针的函数
{
    struct Student *head;
    struct Student *p1,*p2;
    n=0;
    p1=p2=(struct Student *)malloc(LEN);    //开辟一个新单元
    scanf("%ld,%f",&p1->num,&p1->score);    //输入第一个同学的学号和成绩
    head=NULL;
    while(p1->num!=0)
    {
        n=n+1;
        if(n==1)
            head=p1;
        else
            p2->next=p1;
        p2=p1;
        p1=(struct Student *)malloc(LEN);      //开辟动态储存区，把起始地址赋予给p1
        scanf("%ld,%f",&p1->num,&p1->score);   //输入其他同学的学号和成绩
    }
    p2->next=NULL;
    return(head);
}
void pr(struct Student *head) //定义pr函数
{
    struct Student *p;
    p=head;
    if(head!=NULL)
        do
        {
            printf("%ld%5.1f\n",p->num,p->score);
            p=p->next;
        }
    while(p!=NULL);
}
void main() {
    struct Student *head;
    head=cr();
    pr(head);
  
    
}
