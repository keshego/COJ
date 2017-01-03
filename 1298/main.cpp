#include <iostream>
using namespace std;
bool ma[100];
int main()
{
	int i,n,s=0;
	for(i=1;i<=10;i++)
	{
		cin>>n;
		n=n%42;
		if(ma[n]==false)
			s++;
		ma[n]=true;
	}
	cout<<s<<endl;

	return 0;
}
