#include<iostream>
#include<fstream>

using namespace std;

int a,b,h,w;
int ansh,answ,ans;

void in()
{
	ifstream cin("bb8.in");
	cin>>a>>b>>h>>w;
}

void solution()
{
	ansh=h/a;
	answ=w/b;
	if (h%a != 0) ansh++;
	if (w%b != 0) answ++;
	ans=ansh*answ;
}

void out()
{
	ofstream cout("bb8.out");
	cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
