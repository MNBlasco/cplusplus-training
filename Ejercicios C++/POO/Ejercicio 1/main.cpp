#include <iostream>
#include <conio.h>
#include "Persona.h"

using namespace std;

int main(int argc, char** argv){
	
	Persona* persona1 = new Persona("Matias",27);
	persona1->correr();
	
	Persona* persona2 = new Persona("37931913");
	persona2->correr(20);
	
	getch();
	return 0;
}
