//program to implement queue using linked lists
#include<stdlib.h>
#include<stdio.h>

typedef struct node {
    int data;
    struct node *link;
}nodetype;

void enqueue(nodetype **front, nodetype ** rear, int key ){
    nodetype *temp=(nodetype*)malloc(sizeof(nodetype));
    if(temp==NULL)
    {
        printf("\nQueue is full !! ");
        return ;
    }
    temp->data=key ;
    temp->link=NULL;
    if(*front==NULL){
        *front=*rear=temp;
        return;
    }
    (*rear)->link=temp;
    *rear=temp;

}

void dequeue(nodetype **front, nodetype ** rear ){
    nodetype *temp=*front;
    if(temp==NULL)
    {
        printf("\nQueue is Empty !! ");
        return;
    }
    *front=(*front)->link;
    printf("Dequeued value is : %d",temp->data);
    free(temp);
}

int main(){
     int x=1;
    nodetype *front=NULL, *rear=NULL;
    while(x)
    {
        int ch , key ;
        printf("\nMenu\nPress 1 to Enqueue \nPress 2 to Dequeue \nPress 3 to exit \nEnter choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("Enter the value : ");
            scanf("%d",&key);
            enqueue(&front, &rear , key);
            break;
        case 2: 
            dequeue(&front , &rear);
            break;
        case 3:
            x=0;
            break;

        default:printf("\nWrong choice !! ");
            break;
        }
    }
    return 0;
}