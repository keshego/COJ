#include <iostream>
using namespace std;
int main()
{
	long long a[5];
	long long b,c,d,e;
	cin>>e;
	for(d=1;d<=e;d++)
	{
		cin>>b>>c;
		if(c==0)
		{
			cout<<1<<endl;
			continue;
		}
		a[1]=b;
		a[2]=b*b;
		a[3]=b*b*b;
		a[0]=b*b*b*b;
		cout<<a[c%4]%10<<endl;
	}

	return 0;
}
