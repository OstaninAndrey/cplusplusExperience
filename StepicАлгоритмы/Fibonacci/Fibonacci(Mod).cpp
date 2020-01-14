#include<iostream>

using namespace std;

int Fibonacci(long long n,int m)
{
	int F[n];
	F[0]=0;
	F[1]=1;
	for (int i=2;i<=n;i++)
	{
//		F[i]=(F[i-1]+F[i-2]);
	}
	return n%m;
}

int main()
{
	long long n=0,m=0;
	cin>>n>>m;
	cout<<Fibonacci(n,m)<<"\n";
	return 0;
}
