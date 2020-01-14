#include<iostream>
#include<cstring>

using namespace std;

string OS,s[1000],S;
int length=0;

string RememberString(int a,int b,string c)
{
 	length=a-b;
	int i=0;
	for (b;b<a;b++)
	{
		OS+=c[b];
	}
	return OS;
}

void in()
{
	int i=0;
	while(getline(cin,S))
	{
		s[i]=S;
		i++;
	}
}

void solution()
{
	int k=0,l=0;
	string p=" ";
	s[0]=s[0]+p;
	for(int j=1;j<=s[0].length();j++)
	{
		if (s[0][j]==32) {
			k=j;
			if (length<(k-l)){
				OS="";
				RememberString(k,l,s[0]);
				}
			l=k+1;
			}
		}
}

void out()
{
	cout<<OS<<"\n"<<length<<"\n";
}

int main()
{
	in();
	solution();
	out();
	system("pause");
}
