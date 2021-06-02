#include <iostream>
#include <conio.h>
#include "Triangulo.h"
#include "Cuadrado.h"

using namespace std;

int main(int argc, char** argv) {
	
	Triangulo* t1 = new Triangulo(3,5,6,7);
	
	cout<<"La cantidad de lados es: "<<t1->getNLados()<<endl;
	cout<<"El area del triangulo es: "<<t1->areaTriangulo()<<endl;
	
	Cuadrado* c1 = new Cuadrado(4,5);
	cout<<"El perimetro del cuadrado es: "<<c1->areaCuadrado()<<endl;
	cout<<"El area del cuadrado es: "<<c1->perimetroCuadrado()<<endl;
	
	return 0;
}
