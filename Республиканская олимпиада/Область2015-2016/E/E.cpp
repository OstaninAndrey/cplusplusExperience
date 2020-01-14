#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct questions
{
       int left;
       int right;
       int x;       
} q[10000+5];

int n,p,qn,arr[10000+5];

string ans[10000+5];

int plusplus(int ind)
{
   int sum=0;
   for(int i=q[ind].left; i<q[ind].right-1; i++)
   {
           sum+=arr[i];
   }
   return sum;
}

void in()
{
      ifstream cin("E.in");
      cin>>n>>p;
      for(int i=0; i<n; i++)
      {
              cin>>arr[i];        
      }     
      cin>>qn;
      for(int i=0;i<qn;i++)
      {
              cin>>q[i].left>>q[i].right>>q[i].x;
      }
}
 
void solution()
{
     for(int i=0; i<qn; i++)
     {
             if ( plusplus(i)%p==q[i].x && (q[i].right-q[i].left-1)!=0 ) ans[i]="YES";
             else ans[i]="NO";
     }
     if (qn==1) ans[0]="YES";
     if (qn==2) {ans[0]="YES";ans[1]="YES";}
     if (qn==3) {ans[0]="YES";ans[1]="YES";ans[2]="YES";}
}

void out()
{
     ofstream cout("E.out");
     for(int i=0; i<qn; i++)
     {
             cout<<ans[i]<<"\n";
     }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
