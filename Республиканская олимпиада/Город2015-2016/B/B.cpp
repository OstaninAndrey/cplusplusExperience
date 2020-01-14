#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int N,arr[100005];
int ans=90;

void in()
{
       ifstream cin("B.in");
       cin>>N;
       for(int i=0;i<N;i++)
       {
               cin>>arr[i];
               }
}
 
void solution()
{
     sort(arr,arr+N);
     for(int i=1;i<N+1;i++)
     {
             if (arr[i-1]-i==1) {
                                ans=i;
                                break;
                                }
             }
}

void out()
{
     ofstream cout("B.out");
     cout<<ans;
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
