
#include<iostream>
#include<fstream>
using namespace std;
 
long long m, n;
long long ans = 1;
int digit = 1;
 
int Digit(int n,int digit)
{
    if (n>0) {digit=(digit*10); return Digit(n/10,digit); }
    else return digit;
}
 
 
void in()
{
    ifstream cin("numbers.in");
    cin>>n>>m;
}
 
void solution()
{
    ans=m/Digit(n,digit);
    if (m%Digit(n,digit) >= n) ans++;
}
 
void out()
{
    ofstream cout("numbers.out");
    cout<< ans<<"\n";
}
 
int main()
{
    in();
    solution();
    out();
    return 0;
}
