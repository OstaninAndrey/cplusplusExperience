
#include<iostream>
#include<fstream>
#include <algorithm>

using namespace std;

const int maxMilk = 1e3;

int X, Y, M;
int current;
int ans;


int f(int current,int XorY)
{
    if (current > M) return (current-XorY);
    return current = max(f((current+X), X), f((current+Y), Y));
}

void in()
{
    ifstream cin("pails.in");
    cin>>X>>Y>>M;
}

void solution()
{
    ans = f(current,0);
}

void out()
{
    ofstream cout("pails.out");
    cout<<ans<<"\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
