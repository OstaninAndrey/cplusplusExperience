#include<iostream>
#include<iostream>

using namespace std;

const int maxNum = 1e6;

struct candies
{
	int type;
	int number;
} candy[maxNum];

int N, putIn; // in
int ind=0, index=0, temp;  // solution
int ans=0;  //out


void in()
{
//	ifstream cin("candies.in");
	cin>>N;
	cin>>candy[index].type;
	candy[index].number++;
	for (int i=1; i<N; i++)
	{
		cin>>putIn;
		if (putIn == candy[index].type) candy[index].number++;
		else
		{
			candy[index+1].type = putIn;
			candy[index+1].number++;
			index++;
			ind++;
		}
		if (ind == 3) {
			temp = ans;
			ans = (candy[index-2].number + candy[index-3].number);
			if (ans < temp) ans = temp;
			ind = 0;
		}
		
	}
}

void solution()
{

}

void out()
{
//	ofstream cout("candies.out");
	cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

