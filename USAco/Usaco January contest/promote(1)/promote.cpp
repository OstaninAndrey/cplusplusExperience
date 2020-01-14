#include <iostream>
#include <fstream>

using namespace std;

struct divisions{
	int before;
	int after;
} bronze, silver, gold, platinum;

int came, bToS, sToG, gToP;

void in()
{
	ifstream cin("promote.in");
	cin>>bronze.before>>bronze.after;
	cin>>silver.before>>silver.after;
	cin>>gold.before>>gold.after;
	cin>>platinum.before>>platinum.after;
}

void solution()
{
	came = ( bronze.after + silver.after + gold.after + platinum.after ) - ( bronze.before + silver.before + gold.before + platinum.before );
	bToS = bronze.before + came - bronze.after;
	sToG = silver.before + bToS - silver.after;
	gToP = gold.before + sToG -gold.after;
}

void out()
{
	ofstream cout("promote.out");
	if (came>=0) cout<<bToS<<"\n"<<sToG<<"\n"<<gToP<<"\n";
	else cout<<1<<"\n"<<1<<"\n"<<1<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
