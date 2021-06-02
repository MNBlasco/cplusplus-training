#include<iostream> // Libreria
using namespace std; // Espacio de nombres estandar

int main (){
	int horas,a_horas,minutos,a_minutos,segundos,resultado;
	cout<<"Ingrese la cantidad de horas: ";
	cin>>horas;
	cout<<"Ingrese la cantidad de minutos: ";
	cin>>minutos;
	cout<<"Ingrese la cantidad de segundos: ";
	cin>>segundos;
	
	a_horas = horas*3600;
	a_minutos = minutos*60;
	resultado = a_horas+a_minutos+segundos;
	
	cout<<"La cantidad de segundos en total es: "<<resultado<<endl;
}
