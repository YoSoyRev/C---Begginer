#include<iostream>

using namespace std;

int main(){
    double prod , formula , iva;

    cout<<"Ingrese el precio del producto: ";
    cin>>prod;
    cout<<"Introduce el iva: ";
    cin>>iva;

    formula = prod * (1 + (iva/100));

    cout<<"Tu producto con iva seria; "<<formula<<endl;
    cout<<"Tu producto sin iva seria; "<<prod<<endl;

    return 0; 

}

 