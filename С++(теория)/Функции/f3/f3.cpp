#include <iostream>
using namespace std;

int a=0;

int NumberOfZero(int n)
{
	int num=0,k=0;
	while (n>0)
	{
		k=n%10;
		n=n/10;
		if (k == 0) num++;
	}
	return num;
}

void in()
{
	cout<<"a= ";
	cin>>a;
}

void out()
{
	cout<<NumberOfZero(a)<<endl;
}

int main()
{
	in();
	out();
//	system ("pause");
	return 0;
}
