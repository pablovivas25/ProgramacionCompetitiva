#include <iostream>

using namespace std;

int main()
{
    int x;


    cin>>x;

    int cociente= x/5;
    int resto = x%5;

    cout<<(resto>0?cociente+1:cociente);


   
}