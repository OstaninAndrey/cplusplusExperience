#include <iostream>
using namespace std;

int a=0;

int MinDigit(int n)
{
	int min=n%10,k=0;
	n=n/10;
	while (n>0)
	{
		k=n%10;
		n=n/10;
		if (min>k) min=k;
	}
	return min;
}

int MaxDigit(int n)
{
	int max=n%10,k=0;
	n=n/10;
	while (n>0)
	{
		k=n%10;
		n=n/10;
		if (max<k) max=k;
	}
	return max;
}
 
void in()
{
	cout<<"a=";
	cin>>a;
}

void out()
{
	cout<<"min="<<MinDigit(a)<<endl;
	cout<<"max="<<MaxDigit(a)<<endl;
}

int main()
{
	in();
	out();
	system("pause");
	return 0;
}
