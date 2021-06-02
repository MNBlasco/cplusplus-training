#ifndef FIGURA_H        // Se utiliza en las clases padre para que no choquen las clases hijas en el main
#define FIGURA_H

class Figura{
	// Atributos
	private:
		int nLados;
	
	// Metodos
	public:
		Figura(int nLados){
			this->nLados = nLados;	
		}
		
		int getNLados(){
			return nLados;
		}
};

#endif
