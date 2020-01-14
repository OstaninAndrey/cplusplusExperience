#include<iostream>
#include<cstring>

using namespace std;

bool Compare(string S1,string S2)
{
	if (S1.length()==S2.length()) {
		for (int i=0;i<S1.length();i++)
		{
			if (S1[i]!=S2[i]) {return 1;}
		}
	}
	else return 1;
	return 0;
}

int main()
{
	string S1,S2;
	cin>>S1>>S2;
	if (Compare(S1,S2)==0) {cout<<"Yes\n";}
	else {cout<<"No\n";}
	system("pause");
}
