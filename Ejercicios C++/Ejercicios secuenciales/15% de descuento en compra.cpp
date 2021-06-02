#include<iostream> // Libreria
#include<cmath> // Libreria para operaciones matematicas
using namespace std; // Espacio de nombres estandar

int main (){
float subtotal,descuento,total;
cout<<"Ingrese el subtotal de la compra: "<<endl;
cin>>subtotal;
descuento = subtotal*15/100;
total = subtotal - descuento;
cout<<"\nEl valor total de la compra con el descuento es: $"<<total;
}
