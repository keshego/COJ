#include <iostream>
#include <cmath>
using namespace std;

int main()
{
/*
odd= Valores Impares
even=Valores Pares
Numero = cadena a leer
i= contador comienza desde 0 y termina hasta leer el limite de la cadena
*/
    int odd,even;
    string numero;
    while(true)
    {
    odd=0;even=0;
    cin>>numero;
    if(numero=="0") break;
    else
    for(int i=0;i<numero.length();i++)
    {
    if(i%2==0) even+=numero[i]-48;
    else
    odd+=numero[i]-48;
    }
    if((int)fabs(odd-even)%11==0) cout<<numero<<" is a multiple of 11."<<endl;
    else cout<<numero<<" is not a multiple of 11."<<endl;
    }

    return 0;
}
