#include "Poligono.h"

class Triangulo : public Poligono{
	private:
		float lado1,lado2,lado3;
		
	public: 
		Triangulo(float lado1,float lado2, float lado3){
			this->lado1 =  lado1;
			this->lado2 =  lado2;
			this->lado3 =  lado3;
	}
	
	float perimetro(){
		float per = (lado1+lado2+lado3);
		return per;
	}
	
	float area(){
		float p = (lado1+lado2+lado3)/2;
		float area = (p*(p-lado1)*(p-lado2)*(p-lado3));
		return area;
	}
};
