#include<iostream>

using namespace std;

int A, ind;
pair <int,int> ans[10+3];

void forI(int i)
{
    ans[ind].first=i;
    while (A%i==0) 
    {
        ans[ind].second++;
        A=A/i;
    }
    if (ans[ind].second!=0) ind++;
}
 
void forOther()
{
    for(int i=3; i*i<=A; i+=2) forI(i);
}

void in()
{
	cin>>A;
}

void solution()
{
	forI(2);
    forOther();
	if (A!=1) 
	{
		ans[ind].first=A;
		ans[ind].second=1;
	}
}

void out()
{
	if (A!=1) for(int i=0; i<=ind; i++)	cout<<ans[i].first<<" - "<<ans[i].second<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
