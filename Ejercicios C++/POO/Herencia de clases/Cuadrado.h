#include "Figura.h"
#include <cmath>

class Cuadrado : public Figura{
	// Atributos
	private:
		float lado;
		
	// Metodos:	
	public:
		Cuadrado(int nLados, float lado) : Figura(nLados){
			this->lado = lado;
		}
		
		float perimetroCuadrado(){
			float p = 4 * lado;
			return p;
		}
		
		float areaCuadrado(){
			float a = lado*lado;
			return a;
		}

};
