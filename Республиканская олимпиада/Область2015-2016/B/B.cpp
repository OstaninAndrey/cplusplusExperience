#include <iostream>
#include <fstream>

using namespace std;

int n,a[100000+5];
int l[100000+5],r[100000+5];

void forL(int i)
{
    int num=0,temp=0;
    if (i==0) return;
    for(int j=i-1;j>=0;j--)
    {
              if ( a[j]>=a[i] )
              {
                   for(int k=j+1;k<i;k++)
                   {
                           if ( a[k]>a[j] ) break;
                           temp++;
                   }
                   if ( temp==i-j-1 ) num++;
                   temp=0; 
              }      
    }
    l[i]=num;
}

void forR(int i)
{
    int num=0,temp=0;
    if (i==n-1) return;
    for(int j=i+1;j<n;j++)
    {
              if ( a[j]>=a[i] )
              {
                   for(int k=i+1;k<j;k++)
                   {
                           if ( a[k]>a[j] ) break;
                           temp++;
                   }
                   if ( temp==j-i-1 ) num++;
                   temp=0; 
              }      
    }
    r[i]=num;
}

void in()
{
     ifstream cin("B.in");
     cin>>n;
     for(int i=0;i<n;i++)
     {
             cin>>a[i];
     }
}
 
void solution()
{
    for(int i=0;i<n;i++)
    {
            forL(i);
            forR(i);
    }
     
}

void out()
{
     ofstream cout("B.out");
     for(int i=0;i<n;i++)
     {
             cout<<l[i]<<" "<<r[i]<<"\n";;        
     }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
