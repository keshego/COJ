#include <iostream>

using namespace std;

int main()
{
double S=0,B;

for(int j=1;j<=12;j++)
{
cin>>B;
S=S+B;
}
S=S/double(12);
cout<<"$"<<S<<endl;
    return 0;
}
