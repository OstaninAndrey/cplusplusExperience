#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

string a;
char b[105];
int ToF=1,num,ind=0,j=0;

void in()
{
		ifstream cin("input.txt");
	getline(cin,a);
}

void solution()
{
	num=a.length();
	for(int i=0;i<num;i++)
	{
		if (a[i]!=' ') {
		b[ind]=a[i];
		ind++;}
		}
	
	for(int i=0;i<(ind-1);i++)
	{
		if (b[i]!=b[ind-1]) {
			ToF=0;
			break;
		} 
		ind--;
		}	
}

void out()
{
	
		ofstream cout("output.txt");
	if (ToF==1) cout<<"yes";
	else cout<<"no";

}

int main()
{
	in();
	solution();
	out();
	return 0;
}
