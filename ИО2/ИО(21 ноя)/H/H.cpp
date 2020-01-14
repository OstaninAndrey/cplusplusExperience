#include<iostream>
#include<fstream>

using namespace std;

int num, n;
int ind=0;
int temp=0;
int ans;

void in()
{
//	ifstream cin("warriors.in");
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>n;
		if (n==1) ind++;
		
	}
}

void solution()
{
	
}

void out()
{
//	ofstream cout("warriors.out");
	if ((n-ind)<=n/2) cout<<0;
	else {
		if (n%2==0) cout<<(n/2-ind);
		else cout<<(n/2+1-ind);
	}
}

int main()
{
	in();
//	solution();
	out();
	return 0;
}
