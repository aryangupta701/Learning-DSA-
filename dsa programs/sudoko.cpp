#include<iostream>
#include<process.h>
using namespace std;
bool issafe(int** a, int , int, int);
bool solvesudoko(int** a, int col);

int main ()
{
    int n , a[9][9], i, j,k;
    cout<<"Enter the number of locations which needs to be predefined";
    cin>>n;
    cout<<"Enter the locations one by one : ";
    for( k=0; k<n; k++)
    {
cout << "LOCATION : ";
cin>>i>>j;
cout<<"VALUE : " ;
cin>>a[i][j];
    }
cout<<solvesudoko(a,0);
return 0;

}

bool solvesudoko(int** a , int col )
{int j,i,k;
    if(col==9)
    {
     for( i=0;i<9;i++)
      for( j=0 ; j<9;j++)
      cout<<a[i][j]<<" ";
      cout<<endl;
      exit(0);
      return true;
    }

for(i=0;i<9;i++)
{
    for(k=1;k<=9;k++)
    {
if(issafe(a,col,i,k))
{
    a[col][i]=k;
    if(solvesudoko(a,col))
    {

    }

    else {
        a[col][k]=0;
        return false ; 
    }

}

}
if(i>8)
{
col++;
i=0;
}
}

}

bool issafe(int a[9][9], int col, int i , int k) 
{
    int m,p;
if(a[i][col]==0)
{
    for(m=0;m<9;m++)
    {
    
    if(k==a[i][m])
    return false;
    if(k==a[m][col])
    return false;
    }

    for(m=i-i%3;m<(i-i%3)+3;m++)
    {
    for(p=col-col%3;p<(col-col%3)+3;p++)
    {
        if(m!=i && p!=col)
        {
            if(a[m][p]==k)
            return false ;

        }

    }
    }
    return true;
}
}
