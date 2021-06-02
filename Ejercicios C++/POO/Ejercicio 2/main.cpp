#include <iostream>
#include <conio.h>
#include "Cuadrilatero.h"
using namespace std;

int main(int argc, char** argv) {
	
	float lado1,lado2;
	Cuadrilatero* c1;
	
	cout<<"Digite los dos lados del cuadrilatero: "<<endl;
	cin>>lado1>>lado2;
	
	if(lado1 == lado2){
		c1 = new Cuadrilatero(lado1);
	}
	else{
		c1 = new Cuadrilatero(lado1,lado2);
	}
	
	cout<<"El perimetro es: "<<c1->obtenerPerimetro()<<endl;
	cout<<"El area es: "<<c1->obtenerArea()<<endl;
	
	getch();
	return 0;
}
