#include<iostream>

using namespace std;

int first=0,second=0,ans=0;

void in()
{
	cin>>first>>second;
}

void solution()
{
	if ((first==0)||(second==1)) ans=1;
	if (first%2==0) ans=1;
	if (second%2!=0) ans=1;
	
}

void out()
{
	if (ans==1) cout<<"yes\n";
	else cout<<"no\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
