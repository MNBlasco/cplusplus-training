#include <iostream>
#include<conio.h>
#include "Planta.h"
#include "AnimalCarnivoro.h"
using namespace std;

int main(int argc, char** argv) {
	
	Planta* planta1 = new Planta();
	planta1->alimentarse();
	
	AnimalCarnivoro* animal1 = new AnimalCarnivoro();
	animal1->alimentarse();
	
	return 0;
}
