#include<iostream>
#include<string>

using namespace std;

string str;
int sym, ind=0, null=0;
bool ans=false;

bool compare(int ind)
{
	if (ind == sym) return ans;
	else 
	{
		if (str[sym-ind-1] == str[sym+ind+null]) 
		{
			ans = true;
			ind+=1;
			return compare(ind);
		}
		else 
		{
			ans = false;
			ind=sym;
			return ans;
		}
	}
}

void in()
{
	cin>>str;
}

void solution()
{
	sym = str.length();
	if (sym%2 != 0) null = 1;
	sym=sym/2;
	ans = compare(ind);
}

void out()
{
	(ans == true) ? cout<<"YES" : cout<<"NO";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
