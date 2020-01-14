#include<iostream>
#include<string>

using namespace std;

string str, str2 = "";
int temp;
long long sum = 0;

long long Plus(string str2)
{
	long long INT = 0;
	for (int i = 0; i<str2.length(); i++)
	{
		INT = INT * 10 + (str2[i] - '0');
		cout << INT << "\n";
	}
	return INT;
}

void in()
{
	cin >> str;
}

void solution()
{
	for (int i = 0; i<str.length(); i++)
	{
		if ((str[i] >= 48) && (str[i] <= 57)) {
			if ((str[i + 1]<48) || (str[i + 1]>57)) {
				str2 += str[i];
				sum += Plus(str2);
				str2 = "";
			}
			else {
			str2 += str[i];
			}
		}
		
	}
}

void out()
{
	cout << sum;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}