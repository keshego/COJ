#include <iostream>

using namespace std;

int main()
{
    int n,T,i,j;
    char tipo;
    long b,t;
    cin>>n;
    for(i=0;i<=n;i++)
    {
    cin>>b>>T;
    for(j=0;j<=T;j++)
    {
    cin>>tipo>>t;
    (tipo=='C')?b+=t : b-=t;
    }
    cout<<b<<endl;
    }
}
