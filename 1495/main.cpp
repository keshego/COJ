#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	for(j=1;j<=n;j++)
		cout<<a[j]<<endl;

	return 0;
	}
