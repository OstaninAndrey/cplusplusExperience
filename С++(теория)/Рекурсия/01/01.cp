#include<iostream>

using namespace std;

int N, ind;
pair <int, int> arr[50];

void nullOne(int right, int right, int N,int index)
{
    if (N == 0) return;
    for(int i=left; i<=right; i++)
    {
        cout<<i;
        nullOne(arr[index+1].first, arr[index+1].second, (N-1), index+1);
    }
}

void in()
{
	cin>>N;
    for(int i = 0; i<N; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
}

void solution()
{
	
}

void out()
{
    nullOne(arr[ind].first, arr[ind].second, N, ind);
}

int main()
{
	in();
	solution();
	out();
	return 0;
}



// 1)·‡Á‡ - ÂÒÎË Ò˜ÂÚ˜ËÍ ‡‚ÂÌ N
//2)Ô‡ÂÏÂÚ/‚ÓÁ‚‡˘‡ÂÏÓÂ ÁÌ‡˜ÂÌËÂ 
//3)‚˚‡ÊÂÌËÂ 
//4) ÍÓÎ-‚Ó ÔÓ‚ÚÓÂÌËÈ - N
