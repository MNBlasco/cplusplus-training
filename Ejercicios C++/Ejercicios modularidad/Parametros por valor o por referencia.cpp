#include <iostream>
#include <conio.h>
using namespace std;

// Prototipos
void pedirdato(int &);
int aumentar(int);

int main(){
	int numero;
	
	pedirdato(numero); 
	
	cout<<"\nEl aumento es: "<<aumentar(numero)<<endl; // Se necesita un cout ya que la funcion devuelve un valor
}

// Procedimiento para pedir dato (recordar que los datos no retornan un valor)
void pedirdato (int &numero){
	cout<<"Digite un numero: ";
	cin>>numero;
}
// Funcion para aumentar el dato
int aumentar(int numero){
	int aumento;
	aumento = numero + 10;
	return aumento;
}
