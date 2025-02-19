#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head;
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void inseend(struct node *u)
{
    struct node*x=(struct node*)malloc(sizeof(struct node));
    x=head;
    while(x->next!=NULL)
    {
        x=x->next;
    }
    x->next=u;

u->next=NULL;
}
void main()
{int i=1,n;
    printf("no of nodes");
    scanf("%d",&n);
    struct node *nnode,*temp,*newn;
    head=NULL;
    while(i<=n)
    {
        nnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=nnode;
            temp=nnode;
            printf("enter data");
            scanf("%d",&nnode->data);
        }
        else{
           
            temp->next=nnode;
            temp=nnode;
            scanf("%d",&nnode->data);
        }
        i++;
    }
    temp->next=NULL;
    newn=(struct node*)malloc(sizeof(struct node));
    printf("enter data of new node");
    scanf("%d",&newn->data);
   inseend(newn);
    traverse(head);
}
