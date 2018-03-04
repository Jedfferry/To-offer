#include<stdio.h>
#include<stdlib.h>
//线性表的链式表示和实现
//单链表 
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int ElemType;
//单链表的存储结构
typedef struct LNode{
	ElemType data;	//结点的数据域 
	struct LNode *next;//结点的指针域 
}LNode,*LinkList; //linklist为指向结构体LNode的指针类型 
LNode *p,*q,*r,*s;
int i,j; 
//单链表的初始化
Status InitList_L(LinkList &L){
	//构造一个空的单链表L
	L=new LNode;	//生成新结点作为头结点，用头指针L指向头结点
	L->next=NULL;
	return OK;
}
//按序号查找 
Status GetElem_L(LinkList L,int i,ElemType &e){
	//在带头结点的单链表L中查找第i个元素
	p=L->next;j=1;				//初始化，p指向第一个结点，j为计数器
	while(p&&j<i){
		p=p->next;j++;
	} 
	if(!p||j>i)return ERROR;	//第i个元素不存在
	e=p->data;					//取第i个元素 
	return OK; 
}
//按值查找
LNode *LocateElem_L(LinkList L,ElemType e){
	//在带头结点的单链表L中查找值为e的元素
	p=L->next;
	while(p&&p->data!=e)
		p=p->next;
	return p; //成功返回元素位置，否则返回NULL 
}
//单链表插入
Status ListInSert_L(LinkList &L,int i,ElemType e){
	//在带头结点的单链表L中第i个位置之前插入元素e
	p=L;j=0; 
	while(p&&j<i-1)
	{
		p=p->next;
		j++;//寻找第i-1个结点 
	}
	if(!p||j>j-1)return ERROR;
	LNode *s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
} 
//单链表的删除
Status ListDelete_L(LinkList &L,int i,ElemType &e){
	//在带头结点的单链表L中，删除第i个元素，并由e返回其值
	p=L;j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;
		j++; 
	}
	if(!(p->next||j<-i))
	return ERROR;
	q=p->next;
	p->next=q->next;
	e=q->data;
	delete q;
	return OK;
}
//前插法创建单链表
void CreateList_F(LinkList &L,int n){
	//逆位序输入N个元素的值，建立带头结点的单链表L
	L=new LNode;
	L->next=NULL;
	for(i=n;i>0;i--){
		p=new LNode;
		scanf("%d",&p->data);
		p->next=L->next;
		L->next=p;
	} 
} 
//后插法创建单链表
void CreateList_L(LinkList &L,int n){
	//正位序输入N个元素的值，建立带头结点的单链表L
	L=new LNode;
	L->next=NULL;
	r=L;			//尾指针r指向头结点
	for(i=0;i<n;i++){
		p=new LNode;
		scanf("%d",&p->data);
		p->next=NULL;
		r->next=p;
		r=p;
	} 
}
int main(int argc, char** argv) {
	LinkList LA;
	CreateList_L(LA,5);
	s=LA->next;
	do{
		printf("%d\t",s->data);
		s=s->next;
	}while(s);
	int num=0,num1=0;
	GetElem_L(LA,3,num);
	printf("num=%d\n",num);
	ListDelete_L(LA,4,num1);
	printf("num=%d\n",num1);
	return 0;
}
