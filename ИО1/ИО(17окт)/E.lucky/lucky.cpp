#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

int N=0,M=0;
int num=0;

int NumOfLucky (int a)
{
	int ones=0,razr=0;
	int s=a-1; 
	while(a>0)
	{
		razr++;
		ones=ones*10+1;
		a=a/10;
	}
	return ((s/ones)+9*(razr-1));
}

void in()
{
	ifstream cin("lucky.in");
	cin>>N>>M;
}

void solution()
{
	num=NumOfLucky(N)-NumOfLucky(N-M);
}

void out()
{
	ofstream cout("lucky.out");
	cout<<num;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
