#include<iostream>


using namespace std;


int main(){

    float calif1 , calif2 , calif3, calif4, formula = 0;

    cout<<"Ingrese la calificacion 1 "; cin>>calif1;
    cout<<"Ingrese la calificacion 2 "; cin>>calif2;
    cout<<"Ingrese la calificacion 3 "; cin>>calif3;
    cout<<"Ingrese la calificacion 4 "; cin>>calif4;


    formula = (calif1 + calif2 + calif3 + calif4) / 4;

    cout<<"El promedio de las calificaciones es de: "<<formula<<endl;

    return 0;
}