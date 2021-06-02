#include <iostream>
#include <conio.h>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main(int argc, char** argv) {
	
	Poligono* poligonos[2]; // Creamos un nuevo objeto pero no lo instanciamos ya que no se puede en clases abstractas
	
	poligonos[0] = new Rectangulo(7,4);
	poligonos[1] = new Triangulo(3,4,4);
	
	for(int i=0;i<2;i++){
		cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl;
		cout<<"Area: "<<poligonos[i]->area()<<endl;
		cout<<endl;
	}
	
	getch();
	return 0;
}
