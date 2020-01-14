#include<iostream>

using namespace std;

int a,pr=1;

void in()
{
	cin>>a;
}

void solution()
{
	while(a>0)
	{
		pr=pr*(a%10);
		a=a/10;
	}
}

void out()
{
	cout<<pr;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

