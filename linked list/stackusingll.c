//program to implement stack using linked list 
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *link;
}nodetype;
void push ( nodetype **top , int key ){
    nodetype *p=(nodetype*)malloc(sizeof(nodetype));
    if(p!=NULL){
        p->data=key;
        p->link=*top;
        *top=p;
        return ;
    }
    printf("\nStack overflow !! ");
    
}

void pop ( nodetype **top ){
    nodetype *temp=*top;
    if(temp==NULL){
        printf("Stack underflow ! ");
        return ;
    }
    *top=(*top)->link;
    free(temp);

}

void peek (nodetype *top){
    if(top==NULL)
    {
        printf("\nStack Underflow !! ");
        return ;
    }
    printf("The top value is : %d", top->data);


}
int main(){
    int x=1;
    nodetype *top=NULL;
    while(x)
    {
        int ch , key ;
        printf("\nMenu\nPress 1 to push \nPress 2 to pop \nPress 3 to peek \nPress 4 to exit \nEnter choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            scanf("%d",&key);
            push(&top,key);
            break;
        case 2: 
            pop(&top);
            break;
        case 3: 
            peek(top);
            break;
        case 4:
            x=0;
            break;

        default:printf("\nWrong choice !! ");
            break;
        }
    }
    return 0;
}