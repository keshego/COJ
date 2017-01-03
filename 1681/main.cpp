#include <iostream>

using namespace std;

int main()
{
int a,b,c,pol;
cin>>a>>b>>c;
pol=b*b-4*a*c;
if(pol>=0)
    cout<<"YES"<<endl;
    else
    cout<<"NOT"<<endl;
    return 0;
}
