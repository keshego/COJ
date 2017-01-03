#include <iostream>

using namespace std;

int main()
{
    long a,b,c;
while(true)//infinito
{
cin>>a;
if(a==0) break;
cin>>b>>c;
if(a*a+b*b==c*c) cout<<"right"<<endl;
else
if(b*b+c*c==a*a) cout<<"right"<<endl;
else
if(c*c+a*a==b*b) cout<<"right"<<endl;
else cout<<"wrong"<<endl;
 }
        return 0;
}
