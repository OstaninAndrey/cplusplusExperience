#include<iostream>

using namespace std;

int main()
{
	int num;
	cin>>num;
	if ((num>=1)&&(num<=4)) cout<<"few";
	if ((num>=5)&&(num<=9)) cout<<"several";
	if ((num>=10)&&(num<=19)) cout<<"pack";
	if ((num>=20)&&(num<=49)) cout<<"lots";
	if ((num>=50)&&(num<=99)) cout<<"horde";
	if ((num>=100)&&(num<=249)) cout<<"throng";
	if ((num>=250)&&(num<=499)) cout<<"swarm";
	if ((num>=500)&&(num<=999)) cout<<"zounds";
	if (num>=1000) cout<<"legion";
	return 0;
}
