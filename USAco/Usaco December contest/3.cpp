#include<iostream>
#include<fstream>

using namespace std;

struct guests{
	int person;
	int sort;
	int time;
} Drink[1000];

struct sickguys{
	int person;
	int time;
} Sick[55]; 

int Pe,Sorts,D,S;
int ans=0;
int suspicion=0;
int badsort[55];
int ind=0,ind2=0;
int temp=0;

void in()
{
	ifstream cin("badmilk.in");
	cin>>Pe>>Sorts>>D>>S;
	for(int i=0;i<D;i++)
	{
		cin>>Drink[i].person>>Drink[i].sort>>Drink[i].time;
	}
	for(int i=0;i<S;i++)
	{
		cin>>Sick[i].person>>Sick[i].time;
	}
}

void solution()
{
	for(int i=0;i<D;i++)
	{
		for(int j=0;j<S;j++)
		{
			if ((Drink[i].person==Sick[j].person)&&(Drink[i].time<=Sick[j].time)) {
				if (suspicion==0) {
					ind++;
					suspicion=Drink[j].sort;
				}
				if (suspicion!=Drink[j].sort) {
					suspicion=0;
					break;
					}
				else {
					if (ind==S-1) {
						badsort[ind2]=suspicion;
						ind2++;
						}
				}
				ind++;
			}
		}
		suspicion=0;
	}
	
	for(int j=0;j<ind2;j++)
	{
		for(int i=0;i<D;i++)
		{
			if (Drink[i].sort==badsort[j]) temp++;
		}
		if (temp>ans) {
			ans=temp;
			temp=0;
		}
	}
		
}

void out()
{
	ofstream cout("badmilk.out");
	cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
