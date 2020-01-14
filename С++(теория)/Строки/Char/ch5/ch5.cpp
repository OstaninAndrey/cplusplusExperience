#include<iostream>
#include<string>
#include<fstream>

using namespace std;

bool Compare(string a, string b)
{
	int i=0;
	if (a.length()!=b.length()) return 0;
    for(i;i<a.length();i++)
    	{
    		if (a[i]!=b[i]) {
			break;
			return 0;
			}
		}
	if (i==a.length()) return 1;
	else return 0;
}

int main()
{
	string a,b;
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	getline(cin,a);
	getline(cin,b);
 	if (Compare(a,b)!=0) cout<<"yes\n";
 	else cout<<"no";
	return 0;
}
