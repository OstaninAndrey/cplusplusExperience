#include<iostream>
#include <string>
#include<fstream>

using namespace std;

int main()
{
	unsigned char a;
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	cin>>a;
	if (int(a)>=48 && int(a)<=57) cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}
