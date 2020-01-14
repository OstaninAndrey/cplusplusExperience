#include <iostream>
#include<cstring>
#include<fstream>

using namespace std;

int number(string str,int k)
{
	int ans=1;
	for(int i=0;i<k;i++)
	{
		if (str[i]==' ') ans ++;
	}
	if (str[0]==' ') ans--;
	if (str[k-1]==' ') ans--;
	return ans;
}

int main()
{
	int k;
	string S;
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	
	getline(cin,S);
	k=S.length();
	cout<<number(S,k)<<"\n";
	return 0;
}
