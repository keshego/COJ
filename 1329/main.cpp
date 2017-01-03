#include <iostream>

using namespace std;

int main()
{
   	int T,h;
	cin>>T;
	while(T>0)
	{
		cin>>h;
		if(h==1 || h==2 || h==4 || h==8 || h==16 || h==32 || h==64 || h==128 || h==256 || h==512 || h==1024)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
T--;
}
}
