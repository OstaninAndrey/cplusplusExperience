#include<iostream>

using namespace std;

int Fibonacci(int n)
{
	int F[n];
	F[0]=0;
	F[1]=1;
	for (int i=2;i<=n;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	return F[n];
}

int main()
{
	int n=0;
	cin>>n;
	cout<<Fibonacci(n)<<"\n";
	return 0;
}
