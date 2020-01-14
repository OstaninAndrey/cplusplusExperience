#include<iostream>
#include<queue>

using namespace std;

int N;
priority_queue< pair<int,int> > A;
pair <int,int> ID[150010];

void in()
{
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>ID[i].second>>ID[i].first;
		A.push(ID[i]);
	}
}

void solution()
{
	
}

void out()
{
	for(int i=N-1;i>=0;i--)
	{
		cout<<A.top().second<<" "<<A.top().first<<"\n";
		A.pop();
	}
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
