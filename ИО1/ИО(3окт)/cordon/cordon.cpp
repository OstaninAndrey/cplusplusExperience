#include<iostream>
#include<fstream>

using namespace std;

int n=0,m=0,k=0;
char drow[300][300];

void filling()
{
	for(int i=0;i<m;i++)				// заполн€ем массив(кварталы) точками
	{
		for(int j=0;j<n;j++)
		{
			drow[i][j]='.';
		}
	}
	
	for(int i=0;i<m;i++)				// пишем "—" в оцепленных кварталах
	{
		for(int j=0;j<n;j++)
		{
			if (j<=k) {drow[i][j]='C';}
		 }
		k--;
	}
	drow[0][0]='.';
	drow[m][n]='.';
	
}

void in()
{
	ifstream cin("cordon.in");
	cin>>n>>m>>k;
}

//void solution()
//{
//	
//	
//}

void out()
{
	ofstream cout("cordon.out");
	if ((n+m-3)<k) {
		cout<<"NO\n";
	}
	else {
		cout<<"YES\n";
		filling();
	}
	for(int i=0;i<m;i++)				// выводим готовый план города
		{
			for(int j=0;j<n;j++)
			{
				cout<<drow[i][j]<<" ";
			}
		cout<<"\n";
		}
}

int main()
{
	in();
//	solution();
	out();
	return 0;
}

