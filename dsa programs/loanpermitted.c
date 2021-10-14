#include<stdio.h>
#include<string.h>

struct st
{
    char cust_id[50];
char cust_name[50];
int loan_amt;
int bal;
};
int main()
{
    char id[40];
     struct st s[5];
  /*  for(int i=0;i<5;i++)
    {
scanf("%s %s %d %d",&s[i].cust_id,&s[i].cust_name,&s[i].loan_amt,&s[i].bal);
    }*/
    printf("%Enter the Customer id :");
    scanf("%s",&id);
    for(int i=0;i<5;i++)
    {
        if(strcmp(id,s[i].cust_id)==0)
{
    if((s[i].loan_amt<=200000)&&(s[i].bal>=100000))
{
    printf("Loan permitted");
}
}

    }
}