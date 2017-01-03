#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
  int x[3];
  string a;
  cin>>x[0]>>x[1]>>x[2];
  cin>>a;
sort(x,x+3);

  if(a=="ABC") cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
  else if(a=="BAC") cout<<x[1]<<" "<<x[0]<<" "<<x[2]<<endl;
  else if(a=="CAB") cout<<x[2]<<" "<<x[0]<<" "<<x[1]<<endl;
  else if(a=="CBA") cout<<x[2]<<" "<<x[1]<<" "<<x[0]<<endl;
  else if(a=="BCA") cout<<x[1]<<" "<<x[2]<<" "<<x[0]<<endl;
  else if(a=="ACB") cout<<x[0]<<" "<<x[2]<<" "<<x[1]<<endl;
  return 0;
}
