#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string abc;
    int sum=0;

        getline(cin,abc);
    for(int i=0;i<abc.length();i++)
    {
        sum+=(abc[i]-65+1);
    }
        cout<<sum<<endl;

    return 0;
}
