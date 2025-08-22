/*1. Escribe un programa que lea la entrada estandar dos numeros y muestre
en la salida estandar la suma, resta, multiplicacion y division. */


#include<iostream>

using namespace std;

int main(){
    int num1,num2,suma = 0 , resta = 0,  multiplicacion = 0 , division = 0;
    
    
    cout<<"Ingre el primer digito: ";
    cin>>num1;
    cout<<"Ingrese el segundo digito: ";
    cin>>num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    cout<<"EL resultado de la suma es de: "<<suma<<endl;
    cout<<"El resultado de la resta es de: "<<resta<<endl;
    cout<<"El resultado de la multiplcacion es de: "<<multiplicacion<<endl;
    cout<<"El resultado de la divison es de: "<<division<<endl;

    return 0;

}