#include<iostream>

using namespace std;

int main(){

    int x,y,aux;

    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"El nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;




    return 0 ;
}