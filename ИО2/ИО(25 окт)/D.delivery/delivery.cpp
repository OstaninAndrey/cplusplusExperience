#include<iostream>
#include<fstream>

using namespace std;

int n=0,k=0,t=0;
int time=0;
int z[50000],s[50000];

void in()
{
	ifstream cin("delivery.in");
	cin>>n>>k>>t;
	for (int i=0;i<n;i++)
	{
		cin>>z[i];
	}
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
	}
}

void solution()
{
	for (int i=0;i<n;i++)
	{
		time+=z[i];
		if ((s[i]-time)>k) {time+=k;}
		else {
			if ((s[i]-time)>=0) {time+=((s[i]-time)+t);}
			else {time+=t;}
		}
	}
}

void out()
{
	ofstream cout("delivery.out");
	cout<<time<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
