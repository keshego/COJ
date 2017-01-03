#include <iostream>
//DASB "KESHEGO"
using namespace std;
int sub[10]={0,1,1,2,2,2,8};
int main()
{
	int t,k,i;
	int a[10];
	cin>>t;
	for(k=1;k<=t;k++)
	{
		for(i=1;i<=6;i++)
			cin>>a[i];
		for(i=1;i<=5;i++)
			cout<<sub[i]-a[i]<<" ";
		cout<<sub[6]-a[6]<<endl;
	}

	return 0;
}
