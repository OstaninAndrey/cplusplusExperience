#include<iostream>

using namespace std;

int a1,q,N;
int ans;

int nElement(int a1,int q,int N)
{
	if (N != 1) return nElement(a1*q,q,N-1);
	else return a1;
}

void in()
{
	cin>>a1>>q>>N;
}

void solution()
{
	ans = nElement(a1,q,N);
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
