#include<iostream>
#include<fstream>
using namespace std;

long long m, n;
long long ans = 1;
int digit = 1;

int Digit(int n,int digit)
{
	if (n>0) {digit*=10; return Digit(n/10,digit); }
	else return digit;
}

long long nextDigit(long long handOver)
{
	if ((handOver*digit+n) > m) return 0;
	if ( (handOver*digit + n) <= m ) { ans++; return nextDigit((handOver*digit + n)* digit); }
}

void in()
{
	ifstream cin("numbers.in");
	cin>>n>>m;
}

void solution()
{
	digit=Digit(n,digit);
	for(int i=1;i<=9;i++)
	{
		ans+=nextDigit(i);
	}
}

void out()
{
	ofstream cout("numbers.out");
	cout<< ans<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

