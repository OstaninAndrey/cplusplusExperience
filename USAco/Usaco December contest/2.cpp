#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

struct road{
	int part;
	int speed;
};

int B,A;
road Becy[101],Av[101];
int ans=0;
int ind1=0,ind2=0,indA=0;

void in()
{
	ifstream cin("speeding.in");
	cin>>B>>A;
	for(int i=0;i<B;i++)
	{
		cin>>Av[i].part>>Av[i].speed;
	}
	for(int i=0;i<A;i++)
	{
		cin>>Becy[i].part>>Becy[i].speed;
	}
}

void solution()
{
	for(int i=1;i<=B;i++)
	{
		Becy[i].part=Becy[i-1].part+Becy[i].part;
	}
	for(int i=1;i<=A;i++)
	{
		Av[i].part=Av[i-1].part+Av[i].part;
	}
	
	
	for(int i=0;i<100;i++)
	{
		if (i>Becy[ind1].part) ind1++;
		if (i>Av[ind2].part) ind2++;
		if ((Becy[ind1].speed>Av[ind2].speed)&&((Becy[ind1].speed-Av[ind2].speed)>ans))  ans=(Becy[ind1].speed-Av[ind2].speed);
		if (Becy[ind1].speed>Av[ind2].speed) indA++;
	}
	
	
}

void out()
{
	ofstream cout("speeding.out");
	if (indA!=100) cout<<ans;
	else cout<<0;

}

int main()
{
	in();
	solution();
	out();
	return 0;
}

