#include<iostream>
#include<string>
#include<stack>

using namespace std;

string str,ao;
int NumOfLetters = 0, NumInReady = 0;
stack <char> ready;
string ans;



void in()
{
	cin >> str;
}

void solution()
{
	NumOfLetters = str.length();

	ready.push('@');
	for (int i = 0;i < NumOfLetters;i++)
	{
		if (ready.top() == str[i])
		{
			ready.pop();
		}
		else 
		{
			ready.push(str[i]);
		}
	}

	NumInReady = ready.size()-1;
	for (NumInReady;NumInReady > 0;NumInReady--)
	{
		ans += ready.top();
		ready.pop();
	}


}

void out()
{
	for (int i = ans.length()-1;i >= 0;i--)
	{
		cout << ans[i];
	}
	cout << "\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
