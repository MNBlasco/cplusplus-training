#include<iostream> // Libreria
using namespace std; // Espacio de nombres estandar
#include<cmath> // Libreria para operaciones matematicas

// Area = pi * r ^2
// Longitud = 2 * pi * r

int main (){
	float radio,area,longitud;
	const float pi = 3.14159; // Constante
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	area = pi*pow(radio,2); // Funcion pow: sirve para elevar un numero. Ej: pow(base,exponente)
	longitud = 2 * pi * radio;
	
	cout<<"\nEl area del circulo es: "<<area<<endl; // \n sirve para dejar un espacio en blanco despues de lo anterior
	cout<< "Su longitud es: "<<longitud;
}
