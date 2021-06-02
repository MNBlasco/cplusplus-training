#include "Poligono.h"

class Rectangulo : public Poligono{
	private:
		float base,altura;
		
	public:
		Rectangulo(float base,float altura){
			this->base = base;
			this->altura = altura;
		}
		
		float perimetro(){
			float per = 2*base + 2*altura;
			return per;
		}
		
		float area(){
			float area = base*altura;
			return area;
		}
};
