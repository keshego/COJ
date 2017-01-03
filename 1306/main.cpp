#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int t,k,num;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>s;
		if(s.size()==1)
			num=s[0]-'0';
		else
			num=int(s[s.size()-1]-'0')+10*(s[s.size()-2]-'0');
		if(num%4==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}
