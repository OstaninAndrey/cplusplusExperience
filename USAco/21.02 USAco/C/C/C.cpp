#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int N, B, ansx, ansy;
pair <int,int> arr[1000+5];
int ans;

void in()
{
    ifstream cin("balancing.in");
    cin>>N>>B;
    for (int i=0; i<N; i++)
    {
        cin>>arr[i].first>>arr[i].second;
        ansx += arr[i].first;
        ansy += arr[i].second;
    }
    
}

void solution()
{
    if (ansx/N%2 == 0) ansx = ansx/N;
    else ansx = ansx/N+1;
    if (ansy/N%2 == 0) ansy = ansy/N;
    else ansy = ansy/N+1;
    
    sort(arr, arr + N);
    
    for(int i=0; i<N; i++)
    {
        if ((arr[i].first <= ansx) && (arr[i].second <= ansy)) ans++;
        if (arr[i].first > ansx) break;
    }
}

void out()
{
    ofstream cout("balancing.out");
    cout<<ans<<"\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
