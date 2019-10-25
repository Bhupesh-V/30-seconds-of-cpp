# rend()

**description**



```
//circular queue
#include<stdio.h>
#include<stdlib.h>

struct cqueue
{
  int items[4];
  int front;
  int rear;
}q;
struct cqueue *p=&q;

void create();
void insert(int);
void delete();
void display();

void main()
{
  p->front=-1;
  p->rear=-1;
  int val;
  int ch;
  while(1)
  {
    printf("\n1. insert");
    printf("\n2. delete");
    printf("\n3. display");
    printf("\n4. exit");
    printf("\nenter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("\nenter a number to insert : ");
             scanf("%d",&val);
             insert(val);
             break;
      case 2:delete(); break;
      case 3:display(); break;
      case 4:printf("\nbye bye"); exit(1); break;
      default:printf("\ninvlaid choice");
    }
  }
}
void insert(int num)
{
  if((p->rear==3 && p->front==0) || (p->rear+1==p->front))
  {
    printf("\ncircular queue is full");
    exit(1);
  }
  if(p->front==-1)
  {
    p->front=0;
    p->rear=0;
    p->items[p->rear]=num;
  }
  else if(p->rear==3)
  {
    p->rear=0;
    p->items[p->rear]=num;
  }
  else
  {
    p->rear++;
    p->items[p->rear]=num;
  }
  printf("\n%d is successfully inserted",num);
}
void delete()
{
  if(p->front==-1)
  {
    printf("\ncircular queue is empty");
    exit(1);
  }
  if(p->front==4)
  {
    p->front=0;
  }
  if(p->front==p->rear)
  {
    p->rear=-1;
    p->front=-1;
  }
  else
  {
    int num=p->items[p->front];
    p->front++;
    printf("\n%d is successfully deleted",num);
  }
}
void display()
{
  int i;
  if(p->front==-1)
  {
    printf("\ncircular queue is empty");
    exit(1);
  }
  if(p->rear>=p->front)
  {
    for(i=p->front;i<=p->rear;i++)
      printf("\nitems[%d]:%d",i,p->items[i]);
  }
  else
  {
    for(i=p->front;i<4;i++)
      printf("\nitems[%d]:%d",i,p->items[i]);
    for(i=0;i<=p->rear;i++)
      printf("\nitems[%d]:%d",i,p->items[i]);
  }
}




```
