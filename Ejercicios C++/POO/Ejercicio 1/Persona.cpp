#include "Persona.h"
#include <iostream>

using namespace std;

void Persona::correr(){
	cout<<"Soy "<<nombre<<", tengo "<<edad<<" a�os y estoy corriendo una maraton"<<endl;
}

void Persona::correr(int km){
	cout<<"he corrido "<<km<<" kilometros"<<endl;
}
