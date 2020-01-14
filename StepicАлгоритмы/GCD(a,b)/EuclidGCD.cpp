#include<iostream>

using namespace std;

int EuclidGCD(int a,int b)
{
	if (a==0) return b;
	if (b==0) return a;
	if (a>=b) return EuclidGCD(a%b , b);
	if (a<=b) return EuclidGCD(a , b%a);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<EuclidGCD(a,b);
	return 0;
}
