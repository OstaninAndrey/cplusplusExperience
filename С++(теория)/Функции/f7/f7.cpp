#include<iostream>
using namespace std;

int a=0;

bool IsPrime(int n)
{
	int k=0;
	for (int i=1;i<=n;i++)
	{
		if (n%i==0) k++;
	}
	if (k==2) return 1;
	else return 0;
}

int main()
{
	int a=0;
	cin>>a;
	if (IsPrime(a)==1) cout<<"Prime"<<endl;
	else cout<<"Composite"<<endl;
	system ("pause");
	return 0;
}
