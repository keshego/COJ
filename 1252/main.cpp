#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
char a;
while( a!='#') {
cin>>a;
int n=strlen(a);
    for(int i=0;i<n;i++){

    if(a[i]=" ") cout<<"%20";
    else if(a[i]="!") cout<<"%21";
    else if(a[i]="$") cout<<"%24";
    else if(a[i]="%") cout<<"%25";
    else if(a[i]="(") cout<<"%28";
    else if(a[i]=")") cout<<"%29";
    else if(a[i]="*") cout<<"%2a";

        cout<<a[i]<<endl;
 }
 }
return 0;
}
