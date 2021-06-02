#include <iostream>
#include<conio.h>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv) {
	
	Punto punto1(3,4); // Creacion de un objeto estatico utilizando el metodo constructor 1 - Clase + nombre del objeto
	
	cout<<"El valor del punto1 X es: "<<punto1.getX()<<endl; // Utilizacion del metodo publico GET para obtener los valores
	cout<<"El valor del punto1 Y es: "<<punto1.getY()<<endl;
	
	cout<<endl;
	
	Punto* punto2 = new Punto(); /* Creacion de un objeto dinamico utilizando el metodo constructor 2, se utiliza
							        el * despues del nombre de la clase ya que es un puntero. Al usar el metodo 2
								    los valores de X e Y van a ser 0 ambos */
								   
	punto2->setX(5);            // Seteamos los valores manualmente para que no sean igual a 0 ambos
	punto2->setY(10);           // Recordar que en los objetos dinamicos se utiliza la flechita
								   
	cout<<"El valor del punto2 X es: "<<punto2->getX()<<endl; 
	cout<<"El valor del punto2 Y es: "<<punto2->getY()<<endl;
	
	getch();							   
	return 0;
}

