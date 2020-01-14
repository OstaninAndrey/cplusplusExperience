#include<iostream>

using namespace std;

int a1,d,N;
int ans;

int nElement(int a1,int d,int N)
{
	if (N!=0) return nElement(a1+d,d,N-1);
	else return a1;
}

void in()
{
	cin>>a1>>d>>N;
}

void solution()
{
	ans = nElement(a1,d,N);
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
