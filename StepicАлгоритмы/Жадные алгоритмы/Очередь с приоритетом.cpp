
#include<iostream>
#include<queue>

using namespace std;

priority_queue <long long> MyQueue;
int N,a,ind=0,ind2=0;
string str;
long long ans[100000];

void in()
{
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin>>str;
		if (str == "Insert") {
			cin >> a;
			MyQueue.push(a);
		}
		if (str == "ExtractMax") {
			ans[ind] = MyQueue.top();
			ind++;
			MyQueue.pop();
		}
	}
}

void solution()
{

}

void out()
{
	for (int i = 0;i < ind;i++)
	{
		cout << ans[i]<<"\n";
	}
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

