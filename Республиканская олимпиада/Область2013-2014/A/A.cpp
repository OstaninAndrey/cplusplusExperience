#include<iostream>

using namespace std;

double a,b,a1,b1;
double k;
double ansA,ansB;

void ab()
{
	if (a1/a*b<=b1)
	{
		ansA=a1/a;
		ansB=a1/a*b;
	}
	else {
		ansA=b1/b*a;
		ansB=b1/b*b;
	}
}

void a1b1()
{
	
	if (a1/a*b<=b1)
	{
		ansA=a1/a;
		ansB=a1/a*b;
	}
	else {
		ansA=b1/b*a;
		ansB=b1/b*b;
	}
}

void in()
{
	cin>>a>>b>>a1>>b1;
}

void solution()
{
	if (a*b<a1*b1) ab();
	else a1b1();
}

void out()
{
	cout<<ansA<<" "<<ansB;
	cout<<" "<<a1/a;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
