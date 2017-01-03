#include <iostream>
#include <string>
using namespace std;

int main()
{

using namespace std;

	string shape;
	int A, B;
	cin>>shape>>A;
	if(shape=="square")
		B=A;
	else
		cin>>B;
	cout<<A*B<<endl;
    return 0;
}
