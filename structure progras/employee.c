#include<stdio.h>
#include<string.h>

struct employee
{
    char name[20], designation[20];
    int salary , id , bonus ;
   
       int d;
       int m;
       int y;
};

int main()
{ int i;
struct employee x[10];
    for(i=0;i<10;i++)
    {
          printf("ENTER NAME , SALARY , ID , DESIGNATION , DATE , MONTH , YEAR :");
        scanf("%s %d %d %s %d %d %d",&x[i].name,&x[i].salary,
&x[i].id, &x[i].designation, &x[i].d,&x[i].m,&x[i].y );
x[i].bonus=20000;
if(x[i].y<2006)
x[i].bonus=x[i].bonus+30000;
else if(x[i].y==2006 && x[i].m<4)
x[i].bonus=x[i].bonus+30000;
else if(x[i].y==2006 && x[i].m==4 && x[i].d==1)
x[i].bonus=x[i].bonus+30000;
    }
    for(i=0;i<10;i++)
    {
        
    printf("NAME : %s\nSALARY :  %d\nID : %d\nDESIGNATION : %s\nDATE : %d\nMONTH : %d\nYEAR : %d \nBONUS :%d",
x[i].name,x[i].salary,x[i].id,x[i].designation,x[i].d,x[i].m,x[i].y, x[i].bonus);
    }
    return 0;
}
