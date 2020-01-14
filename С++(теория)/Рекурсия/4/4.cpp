#include<iostream>

using namespace std;

bool arr[1000+5]={false};
int K=1;

void fillingArr(int K)
{
	if (K<1000){
	arr[K]=true;
	fillingArr(2*K+1);
	fillingArr(3*K+1);
	}
	else return; 
}
/*
void in()
{
}
*/
void solution()
{
	arr[K]=true;
	fillingArr(K);
}

void out()
{
	for(int i=1;i<1000;i++)		if (arr[i]!=false) cout<<i<<"\n";
}

int main()
{
//	in();
	solution();
	out();
	return 0;
}
