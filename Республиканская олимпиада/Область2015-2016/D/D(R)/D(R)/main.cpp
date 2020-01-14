#include<iostream>

using namespace std;

long long B;
int ans = -1;

int generate_R(long long handOver, int ind)
{
    for(int i = ind; i<B; i++)
    {
        if ((handOver * 10 + i) <= B){
            return
        }
    }
}

void in()
{
    cin>>B;
}

void solution()
{
    
}

void out()
{
    cout<<ans<<"\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}