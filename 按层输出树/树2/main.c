//
//  main.c
//  树2
//
//  Created by yuanweizhong on 17/4/26.
//  Copyright © 2017年 yuanweizhong. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct binode
{
    char data;
    struct binode *lchild;
    struct binode *rchild;
}BiTree;
BiTree * CreatBiTree()  //创建树结构并返回指针变量节点
{
    BiTree *T;
    char data;
    fflush(stdin);
    scanf("%c",&data);
    if(data=='#')  //当数据为＃指针为空
        T=NULL;
    else{
        T=(BiTree *)malloc(sizeof(BiTree));
        T->data=data;
        T->lchild=CreatBiTree();
        T->rchild=CreatBiTree();
    }
    return T;
}
void Lay_order(BiTree *TNode,BiTree **F,BiTree **R)
{
    *F=TNode;   //将当前节点放在首指针所指位置
    printf("%c   ",(*F)->data);
    if((*F)->lchild!=NULL)
    {
        R=R+1;
        *R=(*F)->lchild;   //节点的左儿子放在队尾
    }
    if((*F)->rchild!=NULL)
    {
        R=R+1;      //首指针向后移动一格
        *R=(*F)->rchild; //节点的右儿子放在队尾
    }
    F=F+1;
    if(F!=R)
        Lay_order(*F,F,R);  //递归
    else
        printf("%c\n",(*F)->data);

}
int main(int argc, const char * argv[]) {
    BiTree **F;    //队首指针  指向指针的指针，因为队列数组的元素全是指针
    BiTree **R;    //队尾指针
    BiTree *Queue[1024];  //队列数组
    F=Queue;   //开始时队首队尾指针重合
    R=Queue;
    BiTree *root;   //在main函数中建立一个二叉树根的指针
    root=CreatBiTree();  //创建树
    Lay_order(root, F, R);  //按层遍历
    return 0;
}
