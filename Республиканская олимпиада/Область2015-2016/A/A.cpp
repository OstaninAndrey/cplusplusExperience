#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int a,b;
int b1;
int ans=0,ans1=0;

void forAns()
{
     while(b!=a)
     {
                if (b%3==0 && b/3>=a) 
                {
                            b=b/3;
                            ans++;
                            continue;
                }
                if (b%2==0 && b/2>=a)  
                {
                            b=b/2;
                            ans++;
                            continue;
                }         
                b--;
                ans++;
     }
}

void forAns1()
{
     while(b1!=a)
     {
                 if (b1%2==0 && b1/2>=a)  
                 {
                             b1=b1/2;
                             ans1++;
                             continue;
                 }         
                 if (b1%3==0 && b1/3>=a) 
                 {
                             b1=b1/3;
                             ans1++;
                             continue;
                 }
                
                b1--;
                ans1++;
     }
}

void in()
{
     ifstream cin("A.in");
     cin>>a>>b;
}
 
void solution()
{
     b1=b;
     forAns();
     forAns1();
}

void out()
{
     ofstream cout("A.out");
     cout<<min(ans1,ans)<<"\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
