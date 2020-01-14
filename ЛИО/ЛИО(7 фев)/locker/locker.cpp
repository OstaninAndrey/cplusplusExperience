#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string str,ans="NO";
int sym, ind=0, null=0;
int numOfBadLet=0, indOfBL=0;
pair <char,char> badLet[2];
bool temp;


bool compare(int ind)
{
	if (ind == sym) return true;
	else 
	{
		if (str[sym-ind-1] == str[sym+ind+null]) 
		{
			ind++;
			return compare(ind);
		}
		else 
		{
			badLet[indOfBL].first=str[sym-ind-1];
			badLet[indOfBL].second=str[sym+ind+null];
			indOfBL++;
			numOfBadLet++;
			ind++;
			if (numOfBadLet > 2) return false;
			else return compare(ind); 
		}
	}
}

void conditions()
{
	// если два несовпадения и первый элемент в одной паре равен второму во второй(и наоборот)
	if ((numOfBadLet == 2)&&(badLet[0].first==badLet[1].second)&&(badLet[1].first==badLet[0].second)) ans="YES";
	// если палиндром
	if ((numOfBadLet == 2)&&(badLet[0].first==badLet[1].first)&&(badLet[1].second==badLet[0].second)) ans="YES";
	if (numOfBadLet == 0) ans="YES";
	// если нечетная строка и одна пара несовпавших (сравниваем с центром)
	if ((str.length()%2==1)&&(numOfBadLet == 1))
	{
		if ((badLet[0].first != str[sym]) && (str[sym] == badLet[0].second)) ans="YES";
		if ((badLet[0].second != str[sym]) && (str[sym] == badLet[0].first)) ans="YES";
	}
}

void in()
{
	ifstream cin("locker.in");
	cin>>str;
}

void solution()
{
	sym = str.length();
	if (sym%2 != 0) null = 1;
	sym = sym/2;
	compare(ind);
	conditions();
}

void out()
{
	ofstream cout("locker.out");
	cout<<ans<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

