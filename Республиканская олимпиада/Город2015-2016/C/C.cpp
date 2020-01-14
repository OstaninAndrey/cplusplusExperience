#include<iostream>
#include<fstream>

using namespace std;

int A=0,B=0;
int ans=0;

int difOrNot(int a)
{
    int a1=a;
    if (a/10==0) return 1;
    else {
         if (a/100==0){
                 while(a>0)
                 {
                           while(a1>10){
                                  if (a%10==a1%100/10) return 0;
                                  a1=a1/10;
                                  }
                                  a=a/10;
                                  }
                 }
         else {
              while(a>0)
                 {
                           while(a1>0){
                                  if (a%10==a1%100/10) return 0;
                                  a1=a1/10;
                                  }
                                  a=a/10;
                                  }
                           }
              }
    return 1;
}

void in()
{
     ifstream cin("C.in");
     cin>>A>>B;
}
 
void solution()
{
     for(int i=A;i<=B;i++)
     {
             if (difOrNot(i)==1) ans++;
             }
}

void out()
{
     ofstream cout("C.out");
     cout<<ans<<"\n";          
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
