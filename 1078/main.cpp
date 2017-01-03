#include <iostream>

using namespace std;

int main()
{
    int n,suma=0,dulces,dulces2;
    cin>>n;
    cout<<"\n"<<endl;
for(int i; i<=n;i++)
    cin>>dulces;
        for(int j=0;j<dulces;i++)
        {
        cin>>dulces2;

        suma+=dulces2;
        if(suma>dulces2)
            suma=suma%dulces2;
        }
        if(suma==0)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }
}
