#include<stdio.h>
struct student
{
    char fieldname[50];
    char gen;
    int marks;
    char grade;
};
int main()
{
    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %c %d",&s[i].fieldname,&s[i].gen,&s[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>90)
        {
            s[i].grade='A';
        }
        else
        if(s[i].marks>80&&s[i].marks<=90)
        {
            s[i].grade='B';
        }
        else
        s[i].grade='C';
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %c %d %c",s[i].fieldname,s[i].gen,s[i].marks,s[i].grade);
    }
}