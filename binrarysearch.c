#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
struct tree
{
int data;
struct tree *lchild;
struct tree *rchild;
}*t,*temp;
int element;
void inorder(struct tree *);
void preorder(struct tree *);
void postorder(struct tree *);
struct tree * create(struct tree *, int);
struct tree * find(struct tree *, int);
struct tree * insert(struct tree *, int);
struct tree * del(struct tree *, int);
struct tree * findmin(struct tree *);
struct tree * findmax(struct tree *);
void main()
{
int ch;
do
{
printf("\n\t\t\tBINARY SEARCH TREE");
printf("\n\t\t\t****** ****** ****");
printf("\nMain Menu\n");
printf("\n1.Create\n2.Insert\n3.Delete\n4.Find\n5.FindMin\n6.FindMax");
printf("\n7.Inorder\n8.Preorder\n9.Postorder\n10.Exit\n");
printf("\nEnter ur choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the data:');
scanf("%d",&element);
t=create(t,element);
inorder(t);
break;
case 2:
printf("\nEnter the data: ");
scanf("%d,&element);
t=insert(t,element);
inorder(t);
break;
case 4:
printf("\nEnter the data: ");
scanf("%d,&element);
if(temp->data==element)
printf("\nElement %d is at %d".element.temp);
else
printf('\nElement is not found');
break;
case 5;
temp=findmin(t);
printf("\nMax element=%d",temp->data);
break;
case 6:
temp=findax(t);
printf("\nMax element=%d",temp->data);
break;
case 7:
inorder(t);
break;
case 8:
preorder(t);
break;
case 9:
postorder(t);
break;
case 10:
exit(0);
}
}while(ch<=10);
}
srtuct tree *create(struct tree *t, int element)
{
t=(struct tree*)malloc(sizeof(struct tree));
t->data=element;
t->1child=NULL;
t->rchild=NULL;
return t;
}                 
struct tree * find(struct tree *t, int element)
{
if(t==NULL)
return NULL;
if(element<t->data)
return(find(t->1child,element));
else
if(element>t->data)
return(find(t->rchild,element);
else
return t;
}
struct tree *findmin(struct tree *t)
{
if(t=NULL)
{
t=(struct tree *)malloc(sizeof(struct tree));
t->data=element;
t->1child=NULL;
t->rchild=NULL;
return t;
}
else
{
if(element<t->data)
{
t->1child=insert(t->1child,element);
]
else
if(element>t->data)
{
printf("element already present\n");
}
return t;
}
}
struct tree *del(struct tree *t,int element)
{
if(t==NULL)
printf("element not found\n");
else
if(element<t->1child,element);
else
if(element>t->data)
t->rchild=del(t->rchild,element);
else
if(t->1child=del(t->rchild,element);
else
if(t->1child&&t-->rchild)
{
temp=findmin(t->rchild);
t->data=temp->data;
t->rchild=del(t->rchild,t-data);
}
else
{
temp=t;
if(t->rchild==NULL)
t==t->1child;
free(temp);
}
return t:
}
void inorder(struct tree *t)
{
if(t==NULL)
return;
else{
inorder(t->1child);
printf("\t%d"t->rchild);
}
}
void preorder(struct tree *t)
{
if(t==NULL)
return;
else
{
printf("\t%d",t->data);
preorder(t-rchild);
}
}
void postorder(struct tree *t)
{
if(t==NULL)
return;
else
{
postorder(t->1child);
poostorder(t->rchild);
printf("\t%f\d",t->data);
}
}






