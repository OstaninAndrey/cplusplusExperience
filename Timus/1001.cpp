#include<iostream>
#include<cmath> 
#include<iomanip>
#include<stack>

using namespace std;

long long a;
stack <double> ans;
int ind=0;

void in()
{
	while(cin>>a) 
	{
	ind++;
	ans.push(a);
	}
}

void solution()
{
	
}

void out()
{
	for(int i=0;i<ind;i++)
	{
	cout<<fixed<<setprecision(4)<<sqrt(ans.top())<<"\n";
	ans.pop();
	}
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
