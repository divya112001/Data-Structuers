#include<stdio.h>
struct node
{
int data;
struct node *next;
};
void push(int item)
{
struct node *t;
t=(struct node*)malloc(sizeof(struct node));
t->data=item;
t->next=sp;
sp<-t;
return;
}
int pop()
{
struct node *t;
if(sp==(struct node *)0)
printf("empty stack");
else
item=sp->data;
t=sp;
sp=sp->next;
free(t);
return item;
}
}
void main()
{
int choice,value;
printf("")
