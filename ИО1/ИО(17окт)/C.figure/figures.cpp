#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int N=0,S=0,W=0,E=0,k=0,a=0;
int mas[255];
char c;

int ch(int x,int y)
{
    return ( (x>y)? x:y );
}

void in()
{
	ifstream cin("figures.in");
	cin>>k;
	for(int i=0;i<k;i++){
	cin.get(c);
	mas[c]++;
	}
}

void solution()
{
	a=k-ch(ch(mas['N'],mas['S']),ch(mas['W'],mas['E']));
}

void out()
{
	ofstream cout("figures.out");
	cout<<a<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}


