#include "Punto.h"
// LOS METODOS QUE NO SON CONSTRUCTORES EN C++ SE IMPLEMENTAN EN CLASES SEPARADAS


// Seters (establecen el valor del atributo)

// Establecemos el valor de X
void Punto::setX(int valorX){  // El Punto:: va ya que estamos estableciendo el valor de X para la clase Punto
	x = valorX;
}

 // Establecemos el valor de Y
void Punto::setY(int valorY){
	y = valorY;
}
 
// Getters (sirven para obtener el valor)

// Obtenemos el valor de X
int Punto::getX(){
	return x;
}

// Obtenemos el valor de Y
int Punto::getY(){
	return y;
}
