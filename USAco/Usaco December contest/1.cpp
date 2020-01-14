#include<iostream>
#include<fstream>

using namespace std;

int a,b,c,d;
int ans;

void in()
{
	ifstream cin("paint.in");
	cin>>a>>b;
	cin>>c>>d;
}

void solution()
{
	if (a<c){
		if (b<d) ans=d-a;
		else ans=b-a;
	}
	if (a>c){
		if (b<d) ans=d-c;
		else ans=b-c;
	}
	if (b<c) ans=b+d-a-c;
	if (d<a) ans=b+d-a-c;
	if (a==c) {
		if (d>b) ans=d-a;
		else ans=b-a;
	}
}

void out()
{
	ofstream cout("paint.out");
	cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

