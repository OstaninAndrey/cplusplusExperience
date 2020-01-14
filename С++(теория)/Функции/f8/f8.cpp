#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

int N=0;

int reverse(int N)
{
	int k=N,rev=0,i=0;
	
	while (k>0)
	{
		k=k/10;
		i++;
		}
			
	int mas[i],x=1;
	
	for (i;i>0;i--)
	{
		for (int j=0;j<i-1;j++)
		{
			x=x*10;
 	}
		mas[i]=(N%10);
		rev+=mas[i]*x;
		N=N/10;
		x=1;
 		 }
	 return rev;
}

int solution(int N)
{
	int k;
	for(N;N>0;N--)
	{
		if (reverse(N)==N) k++;
	}
	return k;
}

void in()
{
	cout<<"N=";
	cin>>N;
}

void out()
{
	cout<<solution(N)<<endl;
}

int main()
{
	in();
	out();
	getch();
	return 0;
}
