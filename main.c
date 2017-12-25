#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int info;
    struct link *next;
}
start, *node;
int search(int);
void main()
{
    int no,i,item,pos;
    start.next=NULL;
    node=&start;
    printf("How many nodes, you want in linked list? ");
    scanf("%d",&no);
    printf("");
    for(i=0;i<no;i++)
    {
        node->next=(struct l_list *)malloc(sizeof(struct Node));
        printf("Enter element in node %d: ",i+1);
        scanf("%d",&node->info);
        node=node->next;
    }
    node->next=NULL;
    printf("Linked list is: ");
    node=&start;
    while(node->next!=NULL)
    {
        printf("%d ",node->info);
        node=node->next;
    }
    printf("\nEnter item to be searched : ");
    scanf("%d",&item);
    pos=search(item);
    if(pos<=no)
    printf("Your item is at node %d",pos);
    else
    printf("Sorry! item is no in linked list.a");
    getch();
}
int search(int item)
{
    int n=1;
    node=&start;
    while(node->next!=NULL)
    {
        if(node->info==item)
        break;
        else
        n++;
        node=node->next;
    }
    return n;
}
