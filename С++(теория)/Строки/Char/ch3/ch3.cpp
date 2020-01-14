#include<iostream>
#include<string>
#include<fstream>

using namespace std;

unsigned char ToUpper(unsigned char a)
{
	if (int(a)<=90 && int(a)>=65)	return a;
	if (int(a)<=122 && int(a)>=97)	{
		a=(int(a)-32);
		return a;
	}	
}

int main()
{
	unsigned char a;
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	cin>>a;
	cout<<ToUpper(a)<<"\n";
	return 0;
}
