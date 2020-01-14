#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string str;
int length=0;
int ind=1;

int main()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	
	getline(cin,str);
	length=str.length();
	for(int i=0;i<length;i++)
	{
		for(int j=i;j<length;j++)
		{
			if (str[i]==str[j+1]) ind++;
		}
		if (ind==2) {
			cout<<str[i];
			return 0;
		}
		ind=1;
	}
	cout<<"There is no repeatitions";
	return 0;
}
