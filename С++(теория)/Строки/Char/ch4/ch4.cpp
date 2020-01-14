#include<iostream>
#include<string>
#include<fstream>

using namespace std;

unsigned char change(unsigned char a)
{
	if (int(a)<=90 && int(a)>=65)	{
		a=int(a)+32;
		return a;
	}
	if (int(a)<=122 && int(a)>=97) {
		a=int(a)-32;
		return a;
	}
	return a;
}

int main()
{
	unsigned char a;
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	cin>>a;
	cout<<change(a)<<"\n";
	return 0;
}
